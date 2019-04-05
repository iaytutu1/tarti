#include "fruitselectionscreen.h"
#include "mainscreen.h"
#include "ui_mainscreen.h"

FruitSelectionScreen::FruitSelectionScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new abc::FruitSelectionScreen)
{
    ui->setupUi(this);
}

FruitSelectionScreen::~FruitSelectionScreen()
{
    delete ui;
}
