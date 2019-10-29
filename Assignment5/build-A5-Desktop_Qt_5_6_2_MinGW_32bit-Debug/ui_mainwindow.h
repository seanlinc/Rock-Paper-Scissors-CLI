/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *humanchoose;
    QLabel *label_3;
    QLabel *RoundNum;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *computerchoose;
    QLabel *label_2;
    QLabel *winner;
    QLabel *label_6;
    QLabel *h_w;
    QLabel *c_w;
    QLabel *t_w;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 388);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 50, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 50, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 50, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 80, 71, 16));
        humanchoose = new QLabel(centralWidget);
        humanchoose->setObjectName(QStringLiteral("humanchoose"));
        humanchoose->setGeometry(QRect(210, 80, 71, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 10, 54, 12));
        RoundNum = new QLabel(centralWidget);
        RoundNum->setObjectName(QStringLiteral("RoundNum"));
        RoundNum->setGeometry(QRect(200, 10, 54, 12));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 110, 54, 12));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 130, 101, 16));
        computerchoose = new QLabel(centralWidget);
        computerchoose->setObjectName(QStringLiteral("computerchoose"));
        computerchoose->setGeometry(QRect(200, 130, 71, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 160, 54, 12));
        winner = new QLabel(centralWidget);
        winner->setObjectName(QStringLiteral("winner"));
        winner->setGeometry(QRect(190, 160, 121, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(160, 190, 71, 16));
        h_w = new QLabel(centralWidget);
        h_w->setObjectName(QStringLiteral("h_w"));
        h_w->setGeometry(QRect(190, 230, 81, 16));
        c_w = new QLabel(centralWidget);
        c_w->setObjectName(QStringLiteral("c_w"));
        c_w->setGeometry(QRect(190, 250, 81, 16));
        t_w = new QLabel(centralWidget);
        t_w->setObjectName(QStringLiteral("t_w"));
        t_w->setGeometry(QRect(190, 270, 81, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 230, 54, 12));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 250, 54, 12));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 270, 54, 12));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 50, 54, 12));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Rock", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Paper", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Scissors", 0));
        label->setText(QApplication::translate("MainWindow", "Human choose:", 0));
        humanchoose->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Round:", 0));
        RoundNum->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Computer", 0));
        label_5->setText(QApplication::translate("MainWindow", "Computer choose:", 0));
        computerchoose->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Winner:", 0));
        winner->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "STATISTICS", 0));
        h_w->setText(QString());
        c_w->setText(QString());
        t_w->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Human wins: ", 0));
        label_8->setText(QApplication::translate("MainWindow", "Computer wins:", 0));
        label_9->setText(QApplication::translate("MainWindow", "Ties: ", 0));
        label_10->setText(QApplication::translate("MainWindow", "Player", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
