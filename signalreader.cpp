#include "signalreader.h"


signalreader::signalreader()
{

}

QFuture<QImage> signalreader::read(const QString &fileName)
{
//    auto readImageWorker = [](const QString &fileName) {
//        QImage image;
//        image.load(file"Name);
//        return image;
//    };
//    return QtConcurrent::run(readImageWorker, fileName);
    return new QFuture<QImage>();
}
