#include "mainscreen.h"
#include <QApplication>
#include<QStyle>
#include <QDesktopWidget>
#include <QStringList>
#include <QTextStream>
#include <QQuickView>
#include <QQmlEngine>
#include "databaseconnector.h"
#include "walabotapi.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include "assert.h"
#include <QTextStream>
#include <fstream>
#include "sstream"
#include <QSerialPortInfo>
#include "sensordll.h"
#include "serialportlistener.h"
#include "walabotlistener.h"
#include "logger.h"
#include "labelmanager.h"
#include "soapH.h"
#include "soapStub.h"
#include "soapWalabotServiceSoapProxy.h"
#include "walabotservice.h"
#include <QNetworkAccessManager>
#include "soapH.h"
#include "soapStub.h"
#include "soapWalabotServiceSoapProxy.h"

int main(int argc, char *argv[])
{




    sqputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));
    QApplication a(argc, argv);
    a.addLibraryPath("./plugins");
//    QQmlApplicationEngine engine;
//    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));
    a.setQuitOnLastWindowClosed(false);

    MainScreen *w;
    w = new MainScreen();

    w->setGeometry(
                QStyle::alignedRect(
                    Qt::LeftToRight,
                    Qt::AlignCenter,
                    w->size(),
                    qApp->desktop()->availableGeometry()
                    )
                );
    w->show();

    //w -> showFullScreen();
    //w->centralWidget()->showFullScreen();
    w->ui.textEdit->insertHtml("<html><head><meta name=""qrichtext"" content=""1"" /><style type=""text/css"">p, li { white-space: pre-wrap; }</style></head><body style="" font-family:'Arial'; font-size:12px; font-weight:400; font-style:normal;""><p style="" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;""><span style="" font-size:16pt;"">&quot;00.000&quot;kg</span></p></body></html>");


    //SensorCode_SampleCode();
    //SensorGetSignal();
    //showSignal();

    QTextStream standardOutput(stdout);
    QSerialPort serialPort;
    const QString serialPortName = "COM1";
    serialPort.setPortName(serialPortName);
    const int serialPortBaudRate = QSerialPort::Baud9600;
    serialPort.setBaudRate(serialPortBaudRate);

    if (!serialPort.open(QIODevice::ReadOnly)) {
            QString logString("Failed to open port " + serialPortName +  " error: " +  serialPort.errorString());
            Logger(logString.toStdString());
            //return 1;
    }

//    WalabotServiceSoapProxy *service = new WalabotServiceSoapProxy ("http://localhost:8080/WalabotService.asmx");
//    Logger("send_SensorDoWork_ before ");
//    service->send_SensorDoWork_(nullptr,nullptr,nullptr);
//    Logger("send_SensorDoWork_ after ");




    Logger("SensorCode_SampleCode is called..");
    stringstream serialNum;
    string fullPath;

    WALABOT_RESULT res;
    APP_STATUS appStatus;
    double calibrationProcess;
    double minInCm = 30;
    double maxInCm = 100;
    double resICm = 1;

    double minIndegrees = -30;
    double maxIndegrees = 30;
    double resIndegrees = 2;

    double minPhiInDegrees = -30;
    double maxPhiInDegrees = 30;
    double resPhiInDegrees = 2;

    int ctr = 0;
    bool mtiMode = true;

    res = Walabot_SetSettingsFolder("C:/ProgramData/Walabot/WalabotSDK");
    Logger("Walabot_SetSettingsFolder is passed..");
    assert(res==WALABOT_SUCCESS);
    res = Walabot_ConnectAny();
    Logger("Walabot_ConnectAny is passed..");
    assert(res==WALABOT_SUCCESS);
    res = Walabot_SetProfile(PROF_SENSOR_NARROW);
    Logger("Walabot_SetProfile is passed..");
    assert(res==WALABOT_SUCCESS);
    res = Walabot_SetArenaR(minInCm, maxInCm, resICm);
    Logger("Walabot_SetArenaR is passed..");
    assert(res==WALABOT_SUCCESS);
    res = Walabot_SetArenaTheta(minIndegrees, maxIndegrees, resIndegrees);
    Logger("Walabot_SetArenaTheta is passed..");
    assert(res==WALABOT_SUCCESS);
    res = Walabot_SetArenaPhi(minPhiInDegrees, maxPhiInDegrees, resPhiInDegrees);
    Logger("Walabot_SetArenaPhi is passed..");
    assert(res==WALABOT_SUCCESS);


    FILTER_TYPE filterType = mtiMode ?
        FILTER_TYPE_MTI :
        FILTER_TYPE_NONE;

    res = Walabot_SetDynamicImageFilter(filterType);
    assert(res==WALABOT_SUCCESS);
    res = Walabot_Start();
    assert(res==WALABOT_SUCCESS);
    Logger("Walabot_Start is passed..");

     //WalabotServiceSoapProxy *service = new WalabotServiceSoapProxy("http://localhost:8080/WalabotService.asmx");
     //service->send_HelloWorld(nullptr,nullptr,nullptr);
     serialportlistener serialPortReader(&serialPort,w);
     Logger("comes here.. ");



    return a.exec();

}





