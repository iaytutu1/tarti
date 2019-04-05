#ifndef MAINSCREEN_H
#define MAINSCREEN_H


#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include "ui_mainscreen.h"
#include "searchscreen.h"
#include <QQuickView>
#include <QCloseEvent>
#include <QSignalMapper>
#include "fruit.h"
#include "databaseconnector.h"


namespace Ui {
class MainScreen;
}

class MainScreen : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainScreen(QWidget *parent = nullptr);
    ~MainScreen();

    Ui::MainScreen ui;
    QQuickView *w = new QQuickView();
    void setWeight(QString w);
    QString getButtonSettingsById(QString id);
    QStringList getAllButtonIds();
    QStringList getSearchButtonsIds(QString searchQuery);
    QList<fruit>* getAllFruits();
    //void  getAllFruits();
    void setButtonIconSettingsByBtnId(QPushButton &button,  QString buttonId);
    void createMainScreenFruits(QStringList fruitIdList);
    void createSearchScreenFruits(QStringList searchIdList);
    float weight;





signals:
    void clicked(const QString &text);

public slots:
    void mySlot(const QString &text);
    void on_searchBtn_clicked();
    void searchFruit(const QString &msg) ;
    void clickedSearchButton(const QString &msg);
    //private slots:
    //void on_pushButton_clicked();



protected:
    void closeEvent(QCloseEvent *bar) override;

private:
     QSignalMapper *signalMapper;
     QList<fruit> fruitList;
     databaseconnector *dbc;
     fruit * fruitInstance;



//    QLineEdit *display;
//    double costPerUnit;
//    QPushButton *buttons[12];
//    bool  calculate(double weight, double costPerUnit);
};

#endif // MAINSCREEN_H
