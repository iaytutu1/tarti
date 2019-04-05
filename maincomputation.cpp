#include "mainscreen.h"
#include "ui_mainscreen.h"
#include "maincomputation.h"
#include <QStyle>
#include <QDesktopWidget>
#include<QtCore>
#include<QtGui>
#include<QDialog>
#include<QMessageBox>
#include<QStyle>


MainComputation::MainComputation(QWidget *parent) :
    QMainWindow(parent)

{

}

MainComputation::~MainComputation()
{
    delete &cp;
}
















