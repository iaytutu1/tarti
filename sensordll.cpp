#include "sensordll.h"


SensorDll::SensorDll()
{
    if (!myLib)
        myLib = new QLibrary;
     myLib->setFileName("SensorDll.dll");
}

bool SensorDll:: __Open(PCHAR commName, int baudRate)
{
    typedef bool (*OpenPrototype)(PCHAR, int);
    OpenPrototype open = (OpenPrototype) myLib->resolve("__Open");
    if (open)
        qDebug() << open(commName,baudRate);
    return open(commName,baudRate);
}

QLibrary* SensorDll::myLib = nullptr;

bool SensorDll:: __Close()
{
    typedef bool (*ClosePrototype)();
    ClosePrototype close = (ClosePrototype) myLib->resolve("__Close");
    if (close)
        qDebug() << close();
    return close();
}
PCHAR SensorDll::__GetWeight(){

    typedef PCHAR (*GetWeightPrototype)();
    GetWeightPrototype getWeight = (GetWeightPrototype) myLib->resolve("__GetWeight");
    if (getWeight)
        qDebug() << *getWeight();
    return getWeight();
}
void SensorDll::__Tare(){

    typedef PCHAR (*TarePrototype)();
    TarePrototype tare = (TarePrototype) myLib->resolve("__Tare");
    if (tare)
        qDebug() << *tare();
}
void SensorDll::__uCleart(){

    typedef PCHAR (*uCleartPrototype)();
    uCleartPrototype uCleart = (uCleartPrototype) myLib->resolve("__uCleart");
    *uCleart();
}














