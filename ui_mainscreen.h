/********************************************************************************
** Form generated from reading UI file 'mainscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCREEN_H
#define UI_MAINSCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScreen
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QFrame *frame_3;
    QTextEdit *textEdit;
    QFrame *frame_4;
    QTextEdit *textEdit_2;
    QFrame *frame_6;
    QTextEdit *textEdit_3;
    QFrame *frame_7;
    QFrame *frame_8;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayoutFruits;
    QScrollBar *verticalScrollBar;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *searchBtn;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainScreen)
    {
        if (MainScreen->objectName().isEmpty())
            MainScreen->setObjectName(QStringLiteral("MainScreen"));
        MainScreen->resize(877, 652);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainScreen->sizePolicy().hasHeightForWidth());
        MainScreen->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainScreen);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 871, 650));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 440, 851, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(verticalLayoutWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 20, 421, 161));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(frame_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 421, 141));
        textEdit->setStyleSheet(QLatin1String(".QLineEdit, .QTextEdit\n"
"{\n"
"border-style:solid;\n"
"border-width: 2px;\n"
"border-color: #999999;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #CCCCCC, stop: 1 #AAAAAA);\n"
"\n"
"  background-color: #ffffff; border: 1px solid black;\n"
"     border-radius: 5px;\n"
"	font-size: 12px;font-family: Arial;color:rgb(0, 0, 0);\n"
"}"));
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(450, 0, 381, 81));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        textEdit_2 = new QTextEdit(frame_4);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 20, 371, 51));
        textEdit_2->setStyleSheet(QLatin1String(".QLineEdit, .QTextEdit\n"
"{\n"
"border-style:solid;\n"
"border-width: 2px;\n"
"border-color: #999999;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #CCCCCC, stop: 1 #AAAAAA);\n"
"\n"
"  background-color: #ffffff; border: 1px solid black;\n"
"     border-radius: 5px;\n"
"	font-size: 12px;font-family: Arial;color:rgb(0, 0, 0);\n"
"}"));
        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(450, 80, 381, 101));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        textEdit_3 = new QTextEdit(frame_6);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(10, 10, 371, 71));
        textEdit_3->setStyleSheet(QLatin1String(".QLineEdit, .QTextEdit\n"
"{\n"
"border-style:solid;\n"
"border-width: 2px;\n"
"border-color: #999999;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #CCCCCC, stop: 1 #AAAAAA);\n"
"\n"
"  background-color: #ffffff; border: 1px solid black;\n"
"     border-radius: 5px;\n"
"	font-size: 12px;font-family: Arial;color:rgb(0, 0, 0);\n"
"}"));

        verticalLayout->addWidget(frame_2);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(10, 10, 151, 421));
        sizePolicy1.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy1);
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_8 = new QFrame(frame);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(170, 10, 691, 421));
        sizePolicy1.setHeightForWidth(frame_8->sizePolicy().hasHeightForWidth());
        frame_8->setSizePolicy(sizePolicy1);
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_8->setLineWidth(0);
        gridLayoutWidget = new QWidget(frame_8);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 681, 421));
        gridLayoutFruits = new QGridLayout(gridLayoutWidget);
        gridLayoutFruits->setSpacing(6);
        gridLayoutFruits->setContentsMargins(11, 11, 11, 11);
        gridLayoutFruits->setObjectName(QStringLiteral("gridLayoutFruits"));
        gridLayoutFruits->setContentsMargins(0, 0, 0, 0);
        verticalScrollBar = new QScrollBar(gridLayoutWidget);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayoutFruits->addWidget(verticalScrollBar, 0, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 161, 421));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        searchBtn = new QPushButton(horizontalLayoutWidget);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        sizePolicy2.setHeightForWidth(searchBtn->sizePolicy().hasHeightForWidth());
        searchBtn->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        searchBtn->setFont(font);
        searchBtn->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   stop:0 rgba(60, 186, 162, 255), stop:1 rgba(98, 211, 162, 255))\n"
"}\n"
"QPushButton {\n"
"     background-color: #ffffff; border: 1px solid black;\n"
"     border-radius: 5px;\n"
"	font-size: 12px;font-family: Arial;color: rgb(255, 255, 		255);\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: rgb(170, 170, 127)\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/user1/Desktop/Tart\304\261Proje/basic1-015_search_zoom_find-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchBtn->setIcon(icon);
        searchBtn->setIconSize(QSize(100, 100));

        horizontalLayout->addWidget(searchBtn);

        MainScreen->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainScreen);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainScreen->setStatusBar(statusBar);

        retranslateUi(MainScreen);

        QMetaObject::connectSlotsByName(MainScreen);
    } // setupUi

    void retranslateUi(QMainWindow *MainScreen)
    {
        MainScreen->setWindowTitle(QApplication::translate("MainScreen", "MainScreen", nullptr));
        textEdit->setHtml(QApplication::translate("MainScreen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_2->setHtml(QApplication::translate("MainScreen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">\303\234r\303\274n Kodu  :</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">Birim Fiyat\304\261 :</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QApplication::translate("MainScreen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        searchBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainScreen: public Ui_MainScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCREEN_H
