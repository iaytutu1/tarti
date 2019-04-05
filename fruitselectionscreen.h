#ifndef FRUITSELECTIONSCREEN_H
#define FRUITSELECTIONSCREEN_H


#include <QMainWindow>

namespace abc{
class FruitSelectionScreen;
}

class FruitSelectionScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit FruitSelectionScreen(QWidget *parent = nullptr);
    ~FruitSelectionScreen();

private:
    abc::FruitSelectionScreen *ui;
};

#endif // FRUITSELECTIONSCREEN_H
