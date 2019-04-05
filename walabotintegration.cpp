#include "walabotintegration.h"
#include "labelmanager.h"
#include "logger.h"

walabotintegration::walabotintegration()
{


}



walabotintegration::~walabotintegration()
{

}

void walabotintegration::SensorCode_SampleCode()
{
    WALABOT_RESULT res;
    APP_STATUS appStatus;
    double calibrationProcess;
    int ctr = 0;
    while(1)
    {
        res = Walabot_GetStatus(&appStatus, &calibrationProcess);
        Logger("Walabot_GetStatus is passed..");
        assert(res==WALABOT_SUCCESS);
        res = Walabot_Trigger();
        Logger("Walabot_Trigger is passed..");
        assert(res==WALABOT_SUCCESS);
        saveSignal(&ctr);
        Logger("Walabot_Trigger is passed.."+ QString::number(ctr).toStdString());
        if(ctr == 1) break;
    }
//    res = Walabot_Stop();
//    res = Walabot_Disconnect();
}

void walabotintegration:: saveSignal(int *ctr)
{



    WALABOT_RESULT res;
    AntennaPair * antennaPairs;
    int numPairs;

    res = Walabot_GetAntennaPairs(&antennaPairs, &numPairs);

    if(res != WALABOT_SUCCESS)
    {
        Logger("Walabot_GetAntennaPairs is not success..");
        return;
    }


    for (int i=0;i<numPairs;i++)
    {
        try {

        int tx = (*(antennaPairs+i)).txAntenna;
        int rx =  (*(antennaPairs+i)).rxAntenna;
        double* signal;

        double* timeAxis;
        int numSamples;

        res = Walabot_GetSignal(tx,rx,&signal,&timeAxis,&numSamples);
        assert(res==WALABOT_SUCCESS);
        stringstream buff;
        string pair;

        buff <<  "WholeData.txt";
        buff >> pair;
        buff.clear();

        const char *pairName = pair.c_str();
        string pathStr ="D://QT_Projects/Projects/antenna/";
        string fullPath = pathStr + pairName;
        const char *path= fullPath.c_str();
        Logger("dosya yolu :" + fullPath);
        std::ofstream file;
        file.open(path, ios::app);

        // save 2048 signal (abs)

        file << tx << "," << rx << "," ;

        for (int j=0;j<2048;j++)
        {
          file << std::abs(*(signal+j)) << ","  ;
        }
        labelmanager lmanager;
        QString labelValue(lmanager.tryGetLabelValue());
        file << labelValue.toStdString();
        file << "\n";
        file.close();
        } catch (QException ex) {
            Logger("walabot exception.... \n" );
            Logger(ex.what());

        }{}

    }
    Logger("SaveSignal is closing!!!");
    *ctr = *ctr + 1;

}
