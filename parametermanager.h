#ifndef PARAMETERMANAGER_H
#define PARAMETERMANAGER_H


#include <QString>
#include "databaseconnector.h"

class parametermanager
{

    databaseconnector* dbc;
public:
    parametermanager();
    QString tryGetParameterValue(QString paramCode);

};

#endif // PARAMETERMANAGER_H
