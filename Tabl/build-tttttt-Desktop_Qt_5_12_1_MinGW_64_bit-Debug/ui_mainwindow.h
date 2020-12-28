/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_DellRow;
    QPushButton *pushButton_AddColumn;
    QPushButton *pushButton_DelColumn;
    QSpinBox *spinBoxRow;
    QPushButton *pushButton_GetSum;
    QLabel *labelSum;
    QPushButton *pushButtonSetRand;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1107, 688);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(90, 30, 341, 391));
        tableWidget->setRowCount(2);
        tableWidget->setColumnCount(2);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 50, 75, 23));
        pushButton_DellRow = new QPushButton(centralWidget);
        pushButton_DellRow->setObjectName(QString::fromUtf8("pushButton_DellRow"));
        pushButton_DellRow->setGeometry(QRect(730, 50, 75, 23));
        pushButton_AddColumn = new QPushButton(centralWidget);
        pushButton_AddColumn->setObjectName(QString::fromUtf8("pushButton_AddColumn"));
        pushButton_AddColumn->setGeometry(QRect(590, 80, 75, 23));
        pushButton_DelColumn = new QPushButton(centralWidget);
        pushButton_DelColumn->setObjectName(QString::fromUtf8("pushButton_DelColumn"));
        pushButton_DelColumn->setGeometry(QRect(730, 80, 75, 23));
        spinBoxRow = new QSpinBox(centralWidget);
        spinBoxRow->setObjectName(QString::fromUtf8("spinBoxRow"));
        spinBoxRow->setGeometry(QRect(820, 50, 161, 22));
        spinBoxRow->setValue(2);
        pushButton_GetSum = new QPushButton(centralWidget);
        pushButton_GetSum->setObjectName(QString::fromUtf8("pushButton_GetSum"));
        pushButton_GetSum->setGeometry(QRect(600, 170, 75, 23));
        labelSum = new QLabel(centralWidget);
        labelSum->setObjectName(QString::fromUtf8("labelSum"));
        labelSum->setGeometry(QRect(690, 170, 47, 13));
        pushButtonSetRand = new QPushButton(centralWidget);
        pushButtonSetRand->setObjectName(QString::fromUtf8("pushButtonSetRand"));
        pushButtonSetRand->setGeometry(QRect(600, 200, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1107, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "AddRow", nullptr));
        pushButton_DellRow->setText(QApplication::translate("MainWindow", "DellRow", nullptr));
        pushButton_AddColumn->setText(QApplication::translate("MainWindow", "AddColumn", nullptr));
        pushButton_DelColumn->setText(QApplication::translate("MainWindow", "DelColumn", nullptr));
        pushButton_GetSum->setText(QApplication::translate("MainWindow", "getsum", nullptr));
        labelSum->setText(QApplication::translate("MainWindow", "sum", nullptr));
        pushButtonSetRand->setText(QApplication::translate("MainWindow", "SetRand", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
