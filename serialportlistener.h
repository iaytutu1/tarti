#ifndef SERIALPORTLISTENER_H
#define SERIALPORTLISTENER_H

#include <QByteArray>
#include <QSerialPort>
#include <QTextStream>
#include <QTimer>
#include <QThread>
#include "mainscreen.h"

class serialportlistener : public QObject
{
    Q_OBJECT

public:
    explicit serialportlistener(QSerialPort *serialPort,MainScreen *m, QObject *parent = nullptr);
    serialportlistener();
    QByteArray getmReadData();
    void setmReadData(QByteArray m_readData);
    void setCurrent(QByteArray current);
    void setPrevious(QByteArray previous);

    void setCorrect(QByteArray correct);
    QTextStream getmStandardOutput();
    databaseconnector* dbc;
    QString selectWeightOnScale();

private slots:
    void handleReadyRead();
    void handleTimeout();
    void handleError(QSerialPort::SerialPortError error);


private:
    QSerialPort *m_serialPort = nullptr;
    QTextStream m_standardOutput;
    QTimer m_timer;
    QByteArray m_readData;
    MainScreen *m = nullptr;
    QByteArray previous;
    QByteArray current;
    QByteArray correct;

};
#endif // SERIALPORTREADER_H

