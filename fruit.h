#ifndef FRUIT_H
#define FRUIT_H

#include <QList>
#include <cmath>
#include "databaseconnector.h"

class fruit
{

private:
    static QList<fruit> *fruitList;
    //static fruit *fruitInstance;
    QString description;
    QString recordId;
    float price;
    QString imagePath;
    databaseconnector *dbc;

public:

    fruit getQueryResultFruit(QString queryStr);
    fruit& operator = (const fruit &f );
    QList<fruit>& operator = (  QList<fruit> & fList );
    fruit getFruitIdAndDescription(QString queryStr);

    fruit();
    fruit(QString recordId,QString description,float price,QString imagePath);

    void  addFruit(fruit fr);
    fruit getFruitByRecordId(QString recordId);
    QString getDescription();
    void setDescription(QString);

    QString getRecordId();
    void setRecordId(QString);

    float getPrice();
    void setPrice(float);

    QString getImagePath();
    void setImagePath(QString);



   // QList<fruit> setFruitList(QList<fruit> *fruitList);

    ~fruit();

};

#endif // FRUIT_H
