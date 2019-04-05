#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H


/* Standard C++ includes */
#include <stdlib.h>
#include <iostream>

#include <QtSql/QTSql >
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDriver>
#include <QMessageBox>



using namespace std;


class databaseconnector
{

private:
    static databaseconnector *dbc ;
    QString serverName;
    QString userName ;
    QString dbName ;
    QString password ;
    QSqlDatabase db ;
    databaseconnector();
    void connectDatabase();

public:
    //Singleton

    static databaseconnector *getInstance();
    QSqlDatabase getDb();
    void setDb(QSqlDatabase db);

    QString getServerName();
    void setServerName(QString serverName);

    QString getUserName();
    void setUserName(QString userName);

    QString getDbName();
    void setDbName(QString dbName);

    QString getPassword();
    void setPassword(QString serverName);

    QStringList getQueryResult(QString queryStr);
    void insertQuery(QString queryStr);
    ~databaseconnector();
    void executeStoreProcedure(QSqlDatabase db, QString spName);




};
#endif // DATABASECONNECTOR_H
