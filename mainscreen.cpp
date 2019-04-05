#include "mainscreen.h"
#include "parametermanager.h"
#include "fruit.h"
#include <QStyle>
#include <QDesktopWidget>
#include<QQuickView>
#include<QtGui>
#include<QDialog>
#include<QMessageBox>
#include<QStyle>
#include<QSerialPort>
#include<QSerialPortInfo>
#include <QCloseEvent>
#include <QQmlContext>
#include <QScrollArea>
#include "walabotintegration.h"
#include "serialportlistener.h"
#include "sensordll.h"
#include "logger.h"
#include "barcodeprinter.h"
#include "labelmanager.h"

MainScreen::MainScreen(QWidget *parent) :
    QMainWindow(parent)

{
    try
    {
    ui.setupUi(this);

    setFixedSize(width(), height());
    ui.textEdit->setDisabled(true);
    ui.textEdit_2->setDisabled(true);
    ui.textEdit_3->setDisabled(true);
    //ui.textEdit_4->setDisabled(true);
    dbc = databaseconnector::getInstance();
    QStringList fruitIdList = getAllButtonIds();
    createMainScreenFruits(fruitIdList);
    this->dbc->getDb().close();
    this->setWindowFlags(Qt::WindowTitleHint);
    }
    catch(QException ex)
    {
        //qDebug() << ex.what();
        Logger(ex.what());
    }



}

MainScreen::~MainScreen()
{
    delete &ui;
}

void MainScreen::createMainScreenFruits(QStringList fruitIdList)
{

    // Burada texts yerine tabiki getAllButtonIds methodundan dönen IdListemiz olacak.
    // Buradan dönen id'ler her butonun text değeri olup,
    // Bu butona tıklandığında bu text ile veri tabanından gerekli bilgiler çekilebilecek.


//    QTextStream standardOutput(stdout);
//    QSerialPort serialPort;
//    const QString serialPortName = "COM1";
//    serialPort.setPortName(serialPortName);
//    const int serialPortBaudRate = QSerialPort::Baud9600;
//    serialPort.setBaudRate(serialPortBaudRate);

//    if (!serialPort.open(QIODevice::ReadOnly)) {
//            standardOutput << QObject::tr("Failed to open port %1, error: %2")
//                              .arg(serialPortName)
//                              .arg(serialPort.errorString())
//                           << endl;
//            //return 1;
//    }

//    serialportlistener serialPortReader(&serialPort);

    try
    {

    signalMapper= new QSignalMapper(this);
    connect(signalMapper, SIGNAL(mapped(const QString &)),this, SLOT(mySlot(const QString &)));
    for (int i = 0; i < fruitIdList.size(); ++i) {
        QPushButton *button = new QPushButton(fruitIdList[i]);
        setButtonIconSettingsByBtnId(*button,fruitIdList[i]);
        connect(button, SIGNAL(clicked()), signalMapper, SLOT(map()));
        signalMapper->setMapping(button, fruitIdList[i]);
        ui.gridLayoutFruits->addWidget(button, i / 4, i % 4);

        QString buttonStyle("");
        parametermanager pMan;
        buttonStyle = pMan.tryGetParameterValue("FruitButtonStyleSheet");
        if(buttonStyle != nullptr){
            button->setStyleSheet
                    (
                        buttonStyle
                    );
        }
    }
    ui.frame_8->setLayout(ui.gridLayoutFruits);
    }
    catch(QException ex)
    {
        Logger(ex.what());
    }




}
void MainScreen::createSearchScreenFruits(QStringList searchIdList)
{
}

 void MainScreen::setWeight(QString w)
{
     this->ui.textEdit->insertHtml("<html><head><meta name=""qrichtext"" content=""1"" /><style type=""text/css"">p, li { white-space: pre-wrap; }</style></head><body style="" font-family:'Arial'; font-size:12px; font-weight:400; font-style:normal;""><p style="" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;""><span style="" font-size:16pt;"">&quot;00.000&quot;</span></p></body></html>");
//     this->ui.textEdit->clear();
//     QString html = "<html><head><meta name=""qrichtext"" content=""1"" /><style type=""text/css"">p, li { white-space: pre-wrap; }</style></head><body style="" font-family:'Arial'; font-size:12px; font-weight:400; font-style:normal;""><p style="" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;""><span style="" font-size:16pt;"">&quot;" + w +"&quot;kg</span></p></body></html>";
//     //html.replace("00.000",serialPortReader.getmReadData());
//     this->ui.textEdit->insertHtml(html);

}

void MainScreen::mySlot(const QString &fruitId)
{
    try
    {
    QString idParam(fruitId);
    QString queryFruitStr("select RECORD_ID,DESCRIPTION,PRICE,IMAGE_PATH  from  fruit  where RECORD_ID ='" + idParam + "' " + "and RECORD_STATUS='A'");
    fruit f;
    fruit selectedFruit = f.getQueryResultFruit(queryFruitStr);

   // ui.textEdit->clear();
    ui.textEdit_2->clear();
    ui.textEdit_3->clear();


    QString unitPrice ("");
    QString totalPrice("");
    parametermanager pManager;
    unitPrice = pManager.tryGetParameterValue("UnitPriceString");
    totalPrice = pManager.tryGetParameterValue("TotalPriceString");
    unitPrice.replace("{PARAM_PCODE}",selectedFruit.getDescription());
    unitPrice.replace("{PARAM_UPRICE}",QString::number(selectedFruit.getPrice()));
    ui.textEdit_2->insertHtml(unitPrice);
    totalPrice.replace("{PARAM_TPRICE}",QString::number( this->weight * selectedFruit.getPrice()));
    ui.textEdit_3->insertHtml(totalPrice);
    labelmanager lManager;
    lManager.updateLabelIsActive(idParam);

    }
    catch(QException ex)
    {
        Logger(ex.what());
    }

}


QStringList MainScreen:: getAllButtonIds()
{
       QString idListQuery("select RECORD_ID from fruit  where RECORD_STATUS='A' ");
       QStringList idList = dbc->getQueryResult(idListQuery) ;
       return idList;
}
void MainScreen::searchFruit(const QString &msg) {

    //qDebug() << msg;
    try{
    QStringList emptyList;
    this->w->rootContext()->setContextProperty("searchIdList",emptyList);
    this->w->rootContext()->setContextProperty("imagePathList",emptyList);

    QString searchParam(msg);
    QString searchQuery("select RECORD_ID  from  fruit  where DESCRIPTION like '" + searchParam + "%' " + " and RECORD_STATUS='A'");
    QStringList searchIdList = getSearchButtonsIds(searchQuery);


    //TO DO burası düzenlenebilir."
    QStringList imagePathList;
    foreach (QString item, searchIdList) {
        QString idParam(item);
        QString queryFruitStr("select SUBSTRING(IMAGE_PATH,55,length(IMAGE_PATH) - 55 + 1) from  fruit  where RECORD_ID ='" + idParam + "' " + "and RECORD_STATUS='A'");
        imagePathList.append(dbc->getQueryResult(queryFruitStr));
    };


    this->w->rootContext()->setContextProperty("searchIdList",searchIdList);
    this->w->rootContext()->setContextProperty("imagePathList",imagePathList);
    this->w->rootContext()->setContextProperty("mainScreenObject",this);
    }
    catch(QException ex )
    {
        Logger(ex.what());
    }

}



void MainScreen::clickedSearchButton(const QString &msg)
{
    QString buttonId(msg);
    this->mySlot(buttonId);
    this->w->close();
    this->w->deleteLater();
}

QStringList MainScreen::getSearchButtonsIds(QString searchQuery)
{
    QStringList idList = dbc->getQueryResult(searchQuery) ;
    return idList;
}

QString MainScreen::getButtonSettingsById(QString id)
{
    QString idParam(id);
    QString imagePath("");
    QString imagePathQuery("select IMAGE_PATH  from  fruit  where RECORD_ID ='" + idParam + "' " + "and RECORD_STATUS='A' ");
    QStringList imagePathList  = dbc->getQueryResult(imagePathQuery);
    if(!imagePathList.isEmpty())
    {
         imagePath = imagePathList[0];
    }
    return imagePath;
}
void MainScreen::setButtonIconSettingsByBtnId(QPushButton &button, QString buttonId)
{
        QString imagePath = getButtonSettingsById(buttonId);
        button.setIcon(QIcon(imagePath));
        button.setIconSize(QSize(150,120));
        button.setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
}

/*
 *
 *
 * Burada search qml'i yüklenir.
 * Bu yükleme esnasında keyboard enter ile searchFruit slot'u bağlanır.
 *
 *
*/

void MainScreen::on_searchBtn_clicked()
{


    barcodeprinter *printer = new barcodeprinter();

    //List available printers
    qDebug() << "Available printers: " << printer->getAvailablePrinters();

    //Configure printer (no argument means it prints pdf)
    printer->configurePrinter("POS80 Printer");

    //Print barcode
    printer->printBarcode("test1234");
//    try
//    {

//    this->w = new QQuickView () ;
//    this->w->setSource(QString("qrc:/%2").arg(MAIN_QML));

//    //connect searchFruit and searchFruitTextSignal
//    QObject *item = this->w->rootObject();
//    connect(item, SIGNAL(searchFruitTextSignal(QString)),this, SLOT(searchFruit(QString)));
//    connect(item, SIGNAL(searchFruitClickedSignal(QString)),this, SLOT(clickedSearchButton(QString)));



//    this->w->setGeometry(
//                QStyle::alignedRect(
//                    Qt::LeftToRight,
//                    Qt::AlignCenter,
//                    w->size(),
//                    qApp->desktop()->availableGeometry()
//                    )
//                );

//    this->w->setResizeMode(QQuickView::SizeRootObjectToView);

//    this->w->create();
//    this->w->show();
//    }
//    catch(QException ex)
//    {
//       Logger(ex.what());
//    }

    //view.exec();

}


void MainScreen::closeEvent (QCloseEvent *event)
{
    QMessageBox::StandardButton resBtn = QMessageBox::question( this, "APP_NAME",
                                                                tr("Program Kapatılıyor ! Emin misiniz?\n"),
                                                                QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                                QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes) {
        event->ignore();

    } else {
        event->accept();
        this->close();
        this->deleteLater();
        qApp->quit();

    }
}
