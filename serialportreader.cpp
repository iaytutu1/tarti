#include "serialportreader.h"

#include <QCoreApplication>

serialPortReader::serialPortReader(QSerialPort *serialPort, QObject *parent) :
    QObject(parent),
    m_serialPort(serialPort),
    m_standardOutput(stdout)
{
    connect(m_serialPort, &QSerialPort::readyRead, this, &serialPortReader::handleReadyRead);
    connect(m_serialPort, &QSerialPort::errorOccurred, this, &serialPortReader::handleError);
    connect(&m_timer, &QTimer::timeout, this, &serialPortReader::handleTimeout);

    m_timer.start(5000);
}

void serialPortReader::handleReadyRead()
{
    m_readData.append(m_serialPort->readAll());

    if (!m_timer.isActive())
        m_timer.start(5000);
}

void serialPortReader::handleTimeout()
{
    if (m_readData.isEmpty()) {
        m_standardOutput << QObject::tr("No data was currently available "
                                        "for reading from port %1")
                            .arg(m_serialPort->portName())
                         << endl;
    } else {
        m_standardOutput << QObject::tr("Data successfully received from port %1")
                            .arg(m_serialPort->portName())
                         << endl;
        m_standardOutput << m_readData << endl;
    }

    QCoreApplication::quit();
}

void serialPortReader::handleError(QSerialPort::SerialPortError serialPortError)
{
    if (serialPortError == QSerialPort::ReadError) {
        m_standardOutput << QObject::tr("An I/O error occurred while reading "
                                        "the data from port %1, error: %2")
                            .arg(m_serialPort->portName())
                            .arg(m_serialPort->errorString())
                         << endl;
        QCoreApplication::exit(1);
    }
}
int serialPortReader :: run (int argc, char *argv[])
{
    QCoreApplication coreApplication(argc,argv);
        const int argumentCount = QCoreApplication::arguments().size();
        const QStringList argumentList = QCoreApplication::arguments();

        QTextStream standardOutput(stdout);

        if (argumentCount == 1) {
            standardOutput << QObject::tr("Usage: %1 <serialportname> [baudrate]")
                              .arg(argumentList.first())
                           << endl;
            return 1;
        }

        QSerialPort serialPort;
        const QString serialPortName = argumentList.at(1);
        serialPort.setPortName(serialPortName);

        const int serialPortBaudRate = (argumentCount > 2)
                ? argumentList.at(2).toInt() : QSerialPort::Baud9600;
        serialPort.setBaudRate(serialPortBaudRate);

        if (!serialPort.open(QIODevice::ReadOnly)) {
            standardOutput << QObject::tr("Failed to open port %1, error: %2")
                              .arg(serialPortName)
                              .arg(serialPort.errorString())
                           << endl;
            return 1;
        }

        serialPortReader serialPortReader(&serialPort);
}
