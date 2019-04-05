#include "parametermanager.h"
#include <QException>

parametermanager::parametermanager()
{
    dbc = databaseconnector::getInstance();
}
QString parametermanager::tryGetParameterValue(QString paramCode){

    QString result;
    QString queryStr("select PARAMETER_VALUE  from  parameters  where PARAMETER_CODE ='" + paramCode + "' " + "and RECORD_STATUS='A'");
    try {
        if (this->dbc->getDb().open())
        {
            QSqlQuery query(this->dbc->getDb());
            //qDebug() << "Opened";
            query.exec(queryStr);
            while(query.next()){
                    result = query.record().value(0).toString();
            }
        }
        else
        {
            qDebug() << "Error = " << this->dbc->getDb().lastError().text();
        }

    } catch (QException ex) {
        qDebug() << "Error = " << ex.what();

    }

    return result;

}
