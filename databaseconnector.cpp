

/* Standard C++ includes */
#include <stdlib.h>
#include <iostream>
#include "databaseconnector.h"
#include "fruit.h"
#include <QtSql/QTSql >
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDriver>
#include <QMessageBox>
#include "logger.h"




void databaseconnector::connectDatabase()
{
    try {
        this->db.setHostName(this->getServerName());
        this->db.setUserName(this->getUserName());
        this->db.setPassword(this->getPassword());
        this->db.setDatabaseName(this->getDbName());
        this->db.setConnectOptions();
        bool ok = this->db.open();
        if(ok)
             cout << "Connected..";
    }
    catch (QException &e) {
        cout << "# ERR: SQLException in " << __FILE__;
        cout << "(" << __FUNCTION__ << ") on line "  << __LINE__ << endl;
        cout << "# ERR: " << e.what();
    }
}
QString databaseconnector::getServerName(){
    return this->serverName;
}
QString databaseconnector::getUserName(){
    return this->userName;
}

QString databaseconnector::getPassword(){
    return this->password;
}

QString databaseconnector::getDbName(){
    return this->dbName;
}
QSqlDatabase databaseconnector::getDb(){
        return this->db;
}
void databaseconnector::setServerName(QString serverName)
{
    this->serverName = serverName;
}
void databaseconnector::setUserName(QString userName)
{
    this->userName = userName;
}

void databaseconnector::setPassword(QString password)
{
    this->password = password;
}

void databaseconnector::setDbName(QString dbName)
{
    this->dbName = dbName;
}

void databaseconnector::setDb(QSqlDatabase db)
{
    this->db = db;
}


databaseconnector::databaseconnector()
{
    db = QSqlDatabase::addDatabase("QMYSQL","ScaleConnection");
    serverName="127.0.0.1";
    userName = "root";
    dbName = "scale";
    password ="";
    connectDatabase();

}

databaseconnector* databaseconnector::dbc = nullptr;

databaseconnector* databaseconnector:: getInstance() {
    if (!dbc)
        dbc = new databaseconnector;
    return dbc;
 }



QStringList databaseconnector::getQueryResult(QString queryStr){


    QStringList results;

    if (this->db.open())
    {
        QSqlQuery query(this->db);
        //qDebug() << "Opened";
        query.exec(queryStr);

        while(query.next()){
            for (int var = 0; var < query.record().count(); ++var) {
                QString result = query.record().value(0).toString();
                results.append(result);
            }
        }
    }
    else
    {
        QString logString("Error = " +  this->dbc->getDb().lastError().text());
        Logger(logString.toStdString());
    }


    return results;
}
void databaseconnector::insertQuery(QString mReadData){




    if (this->db.open())
    {
        QSqlQuery query(this->db);
            query.prepare("INSERT INTO scale.dummy (value) "
                          "VALUES (:value)");

            query.bindValue(":value", mReadData);
            query.exec();


    }
    else
    {
        QString logString("Error = " +  this->dbc->getDb().lastError().text());
        Logger(logString.toStdString());
        //qDebug() << "Error = " << this->db.lastError().text();
    }


   // return results;
}

databaseconnector::~databaseconnector()
{
 delete dbc;
}




