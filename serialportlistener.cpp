#include "serialportlistener.h"
#include "mainscreen.h"
#include <QCoreApplication>
#include <QNetworkAccessManager>
#include <sensordll.h>
#include "parametermanager.h"
#include "logger.h"
#include "labelmanager.h"
#include "soapH.h"
#include "soapStub.h"
#include "soapWalabotServiceSoapProxy.h"
#include "walabotservice.h"
#include <string>

int flag =0;
serialportlistener::serialportlistener(QSerialPort *serialPort,MainScreen *m,QObject *parent) :
    QObject(parent),
    m_serialPort(serialPort),
    m_standardOutput(stdout),
    m(m)

{
    Logger("Serial Port Listening.... ");

    connect(m_serialPort, &QSerialPort::readyRead, this, &serialportlistener::handleReadyRead);
    connect(m_serialPort, &QSerialPort::errorOccurred, this, &serialportlistener::handleError);
    connect(&m_timer, &QTimer::timeout, this, &serialportlistener::handleTimeout);
    dbc = databaseconnector::getInstance();
    Logger("Serial Port Listening is passed .... ");
    //m_timer.start(500);
}
 QByteArray serialportlistener:: getmReadData()
 {

     return m_readData;
 }

 void serialportlistener::setmReadData(QByteArray m_readData)
 {
     this->m_readData = m_readData;
 }
 void serialportlistener::setPrevious(QByteArray previous)
 {
     this->previous = previous;
 }
 void serialportlistener::setCurrent(QByteArray current)
 {
     this->current = current;
 }
 void serialportlistener::setCorrect(QByteArray correct){
       this->correct = correct;
   }

 QString serialportlistener::selectWeightOnScale()
 {
     QString idListQuery("select  VALUE from scale.dummy  order by RECORD_ID desc LIMIT 1 ");
     QStringList lastWeigth = dbc->getQueryResult(idListQuery) ;

     QString yourString = lastWeigth[0];
     QString leftSide = yourString.mid(3,6);
     //qDebug() << leftSide; // output "This "

     return leftSide;
 }
void serialportlistener::handleReadyRead()
{
    Logger("handleReadyRead was here.. ");
    m_readData.clear();

    m_readData.append(m_serialPort->readLine());
    char EOT = 0x04;
    setmReadData(m_readData);
    if(flag == 0)
    {
        setPrevious(m_readData);
        flag = 1;
    }
    else if(flag == 1)
    {
        setCurrent(m_readData);
        if(previous.contains(EOT))
        {
            setCorrect(current.append(previous));
        }
        else
        {
            setCorrect(previous.append(current));
        }
        flag = 0;
    }
    Logger("m_readData.toStdString()");
    bool isChanged = false;
    if(m_readData.contains('S')){

        Logger("handleReadyRead was here.. m_readData.contains('S') ");
        Logger("m_readData.toStdString()");
        m->ui.textEdit->clear();
        m->weight = correct.mid(4,6).toFloat();
        //qDebug() <<"correct.mid(4,6).toFloat();" << correct.mid(4,6).toFloat();
        m->ui.textEdit->insertHtml("<html><head><meta name=""qrichtext"" content=""1"" /><style type=""text/css"">p, li { white-space: pre-wrap; }</style></head><body style="" font-family:'Arial'; font-size:12px; font-weight:400; font-style:normal;""><p style="" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;""><span style="" font-size:16pt;"">&quot;"+ correct.mid(4,6) +"&quot;kg</span></p></body></html>");
        //m->ui.textEdit->insertHtml("<html></body><p>asdhakjdhaksjdhsjakdhaskjhdaksjdhaksjhdaksjh</p></body></html>");

//        WalabotServiceSoapProxy *service = new WalabotServiceSoapProxy ("http://localhost:8080/WalabotService.asmx");
//        Logger("send_SensorDoWork_ before ");
//        service->send_SensorDoWork(nullptr,nullptr,nullptr);
//        Logger("send_SensorDoWork_ after ");

        walabotlistener* sensor = new walabotlistener;
        labelmanager lmanager;
        // Eğer aktif labeling var ise başla
        Logger("lmanager.tryGetIsActive() : "  + QString::number(lmanager.tryGetIsActive()).toStdString());
        Logger("m->weight) : " +  QString::number(m->weight).toStdString());



        static int old_value = -1;

        if(m->weight != old_value)
               isChanged = true;

        old_value = m->weight;
        if( lmanager.tryGetIsActive() > 0 && m->weight > 0.0f && isChanged )
        {
            sensor->run();
            isChanged = false;
        }/*
        else
        {
            std::this_thread::sleep_for (std::chrono::milliseconds(50));
        }*/
    }
    else
    {
        isChanged = false;
    }

    if (!m_timer.isActive())
        m_timer.start(500);
}

void serialportlistener::handleTimeout()
{


    Logger("No data was currently available for reading from port.. ");
    if (m_readData.isEmpty()) {
        m_standardOutput << QObject::tr("No data was currently available "
                                        "for reading from port %1")
                            .arg(m_serialPort->portName())
                         << endl;
    } else {
         m_standardOutput << m_readData << endl;
    }
}

void serialportlistener::handleError(QSerialPort::SerialPortError serialPortError)
{
    Logger("handleError..... ");
    if (serialPortError == QSerialPort::ReadError) {
        Logger("An I/O error occurred while reading the data from port.. ");
        m_standardOutput << QObject::tr("An I/O error occurred while reading "
                                        "the data from port %1, error: %2")
                            .arg(m_serialPort->portName())
                            .arg(m_serialPort->errorString())
                         << endl;
    }
}
