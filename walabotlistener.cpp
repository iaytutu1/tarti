#include "walabotlistener.h"
#include <QDebug>
#include "walabotintegration.h"
#include "logger.h"
walabotlistener::walabotlistener()
{

}

void walabotlistener::run()
{
    walabotintegration *integration = new walabotintegration();
    try
    {
        WALABOT_RESULT res;

        integration->SensorCode_SampleCode();

    }
    catch(std::exception ex)
    {
        Logger("walabotlistener error catch");
        Logger(ex.what());
    }

}

