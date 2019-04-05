
#ifndef SERIALPORTREADER_H
#define SERIALPORTREADER_H

#include <QByteArray>
#include <QtSerialPort/QSerialPort>
#include <QTextStream>
#include <QTimer>


class serialPortReader : public QObject
{
    Q_OBJECT

public:
    explicit serialPortReader(QSerialPort *serialPort, QObject *parent = nullptr);
    int run(int argc, char *argv[]);

private slots:
    void handleReadyRead();
    void handleTimeout();
    void handleError(QSerialPort::SerialPortError error);


private:
    QSerialPort *m_serialPort = nullptr;
    QByteArray m_readData;
    QTextStream m_standardOutput;
    QTimer m_timer;
};

#endif // SERIALPORTREADER_H
