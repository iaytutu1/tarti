#ifndef MAINCOMPUTATION_H
#define MAINCOMPUTATION_H

//#include <QMainWindow>
//#include <QPushButton>
//#include <QLineEdit>

namespace Ui {
class MainComputation;
}

class MainComputation : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainComputation(QWidget *parent = nullptr);
    ~MainComputation();

private slots:
    //void calculate();

private:
    MainComputation *cp;

};



#endif // MAINCOMPUTATION_H
