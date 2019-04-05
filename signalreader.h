#ifndef SIGNALREADER_H
#define SIGNALREADER_H

#include <QThread>
#include <QString>
#include <QFuture>
#include <QtConcurrent/QtConcurrentFilter>
#include <QtConcurrent/QtConcurrentRun>


class signalreader : public QObject {
public:
    signalreader();
    QFuture<QImage> read(const QString& fileName);
};


#endif // SIGNALREADER_H
