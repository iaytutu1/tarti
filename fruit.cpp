#include "fruit.h"
#include "boolinq.h"
#include <QList>
#include <list>
#include "logger.h"

fruit::fruit()
{
     dbc = databaseconnector::getInstance();
}

fruit::~fruit(){

}

void fruit::addFruit(fruit fr){
    fruitList->append(fr);
}

fruit& fruit::operator = (const fruit &f ) {
     description=f.description;
     recordId=f.recordId;
     price = f.price;
     imagePath = f.imagePath;
}

QList<fruit>& fruit::operator = (  QList<fruit> & fList ) {

     foreach (fruit item, fList) {

         description=item.description;
         recordId=item.recordId;
         price = item.price;
         imagePath = item.imagePath;
     }
     return fList;

 }

fruit fruit::getFruitByRecordId(QString recordId){

     this->dbc = databaseconnector::getInstance();
     fruit f;
     return f;
}

QList<fruit>* fruit::fruitList = nullptr;

fruit::fruit(QString recordId,QString description,float price,QString imagePath){
    this->setRecordId(recordId);
    this->setDescription(description);
    this->setPrice(price);
    this->setImagePath(imagePath);
}

QString fruit::getDescription(){
    return this->description;
}
void fruit::setDescription(QString description){
    this->description = description;
}

QString  fruit::getRecordId(){
    return this->recordId;
}

void fruit::setRecordId(QString recordId){
    this->recordId =recordId;
}

float fruit::getPrice(){
    return this->price;

}
void  fruit::setPrice(float price)
{
    this->price = price;
}

QString fruit::getImagePath(){
    return this->imagePath;
}
void fruit::setImagePath(QString imagePath){
    this->imagePath = imagePath;
}

fruit fruit::getQueryResultFruit(QString queryStr){

    fruit *fr;
    if (this->dbc->getDb().open())
    {
        QSqlQuery query(this->dbc->getDb());
        query.setForwardOnly(true);
        //qDebug() << "Opened";
        query.exec(queryStr);
        while(query.next()){
            fr = new fruit();
            fr->setRecordId(query.record().value(0).toString());
            fr->setDescription(query.record().value(1).toString());
            fr->setPrice(query.record().value(2).toFloat());
            fr->setImagePath(query.record().value(3).toString());
        }

    }
    else
    {
        QString logString("Error = " +  this->dbc->getDb().lastError().text());
        Logger(logString.toStdString());
    }
    return *fr;

}

fruit fruit::getFruitIdAndDescription(QString queryStr){

    fruit *fr;
    if (this->dbc->getDb().open())
    {
        QSqlQuery query(this->dbc->getDb());
        query.setForwardOnly(true);
        //qDebug() << "Opened";
        query.exec(queryStr);
        while(query.next()){
            fr = new fruit();
            fr->setRecordId(query.record().value(0).toString());
            fr->setDescription(query.record().value(1).toString());
        }

    }
    else
    {
        QString logString("Error = " +  this->dbc->getDb().lastError().text());
        Logger(logString.toStdString());
    }
    return *fr;

}




