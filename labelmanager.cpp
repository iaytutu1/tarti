#include "labelmanager.h"
#include "logger.h"
labelmanager::labelmanager()
{
    dbc = databaseconnector::getInstance();
}



void labelmanager::updateLabelIsActive(QString value){

    try
    {
        QSqlQuery query(this->dbc->getDb());
        QString queryStr("UPDATE scale.labels SET IS_ACTIVE = 0");
        QString queryUpt("UPDATE scale.labels SET IS_ACTIVE = 1 where LABEL_VALUE ='"  + value + "'  " + "and RECORD_STATUS='A'" );
        if (this->dbc->getDb().open())
        {
            query.exec(queryStr);
            query.exec(queryUpt);
        }
        else
        {
            qDebug() << "Error = " << this->dbc->getDb().lastError().text();
        }
    }
    catch(QException ex )
    {
        Logger(ex.what());
    }


}


int labelmanager::tryGetIsActive()
{

    int result;
    QString queryStr("select count(*) from scale.labels lb, scale.fruit fr where lb.LABEL_VALUE = fr.RECORD_ID  and lb.IS_ACTIVE = 1 and lb.RECORD_STATUS='A' and fr.RECORD_STATUS = 'A'");
    try {
        if (this->dbc->getDb().open())
        {
            QSqlQuery query(this->dbc->getDb());
            query.exec(queryStr);
            while(query.next()){
                    result = query.record().value(0).toInt();
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


QString labelmanager::tryGetLabelValue(){

    QString result;
    QString queryStr("select lb.LABEL_VALUE from scale.labels lb, scale.fruit fr where lb.LABEL_VALUE = fr.RECORD_ID and lb.IS_ACTIVE = 1 and lb.RECORD_STATUS='A' and fr.RECORD_STATUS = 'A'");
    try {
        if (this->dbc->getDb().open())
        {
            QSqlQuery query(this->dbc->getDb());
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
