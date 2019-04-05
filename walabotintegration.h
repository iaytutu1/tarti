#ifndef WALABOTINTEGRATION_H
#define WALABOTINTEGRATION_H
#include "walabotapi.h"
#include <QString>
#include <walabotapi.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <assert.h>
#include <unistd.h>
#include <typeinfo>
#include <cmath>
#include <ctime>
#include "sstream"
#include "string"
#include "iomanip"
#include "typeinfo"
#include <ciso646>
#include <ctime>
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include "databaseconnector.h"
#include "fruit.h"
#include <QtSql/QTSql >
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDriver>
#include <QMessageBox>

class walabotintegration
{
public:
    walabotintegration();
    ~walabotintegration();
    void saveSignal(int *ctr);
    void SensorCode_SampleCode();


private:


    QString _name = "plastic_100_40_0_v1";
    QString path = "data/"+_name+"/";
    QString _path = "data/";
    QString _logname = "data/"+_name+".log";
    QByteArray ba = _logname.toLocal8Bit();
    const char *c_str2 = ba.data();
    const char *logname = c_str2;


};

#endif // WALABOTINTEGRATION_H
