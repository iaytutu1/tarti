#ifndef LABELMANAGER_H
#define LABELMANAGER_H


#include <QString>
#include "databaseconnector.h"

class labelmanager
{
    databaseconnector* dbc;
public:
    labelmanager();
    QString tryGetLabelValue();
    int tryGetIsActive();
    void updateLabelIsActive(QString value);
};

#endif // LABELMANAGER_H
