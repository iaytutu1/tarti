#ifndef SENSORDLL_H
#define SENSORDLL_H
#include <QLibrary>
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



class SensorDll
{

public:
    SensorDll();
    static bool __Open(PCHAR commName, int baudRate);
    static bool __Close();
    static PCHAR __GetWeight();
    static void __Tare();
    static void __uCleart();
private:
    static QLibrary *myLib;

};

#endif // SENSORDLL_H
