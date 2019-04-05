#ifndef SEARCHSCREEN_H
#define SEARCHSCREEN_H

#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class searchscreenData;

class searchscreen
{
public:
    searchscreen();
    searchscreen(const searchscreen &);
    searchscreen &operator=(const searchscreen &);
    ~searchscreen();

private:
    QSharedDataPointer<searchscreenData> data;
};

#endif // SEARCHSCREEN_H
