#ifndef LOGGER_H
#define LOGGER_H

#endif // LOGGER_H


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
#include "parametermanager.h"




inline string getCurrentDateTime( string s ){
    time_t now = time(0);
    struct tm  tstruct;
    char  buf[80];
    tstruct = *localtime(&now);
    if(s=="now")
        strftime(buf, sizeof(buf), "%Y-%m-%d %X", &tstruct);
    else if(s=="date")
        strftime(buf, sizeof(buf), "%Y-%m-%d", &tstruct);
    return string(buf);
};
inline void Logger( string logMsg){
    parametermanager pMan;
    //string path = pMan.tryGetParameterValue("FruitButtonStyleSheet");
    string path = "D:/VSense/logs/log_";
    string filePath = path + getCurrentDateTime("date")+ ".txt";
    string now = getCurrentDateTime("now");
    ofstream ofs(filePath.c_str(), std::ios_base::out | std::ios_base::app );
    ofs << now << '\t'  <<  logMsg << '\n';
    ofs.close();
}
