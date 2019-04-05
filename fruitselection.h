#ifndef FRUITSELECTION_H
#define FRUITSELECTION_H


#include "mainscreen.h"
#include <QWidget>
#include <QWindow>


namespace Ui {
class FruitSelection;
}
class FruitSelection : public QWindow
{
    Q_OBJECT

public:
     explicit FruitSelection(QWidget *parent = nullptr);

private slots:
    void on_anyButton_valueChanged(int value);

private:
    Ui::FruitSelection *ui;
};

#endif // FRUITSELECTION_H
