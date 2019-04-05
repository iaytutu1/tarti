#ifndef WALABOTLISTENER_H
#define WALABOTLISTENER_H
#include <QThread>
#include <QString>

class walabotlistener
{
public:
    explicit walabotlistener();
    void run();
    void doConfiguration();

private:
    QString name;
};


#endif // WALABOTLISTENER_H
