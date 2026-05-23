/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *btnAdmin;
    QPushButton *btnStudent;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(595, 511);
        QFont font;
        font.setBold(true);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 10, 351, 221));
        btnAdmin = new QPushButton(groupBox);
        btnAdmin->setObjectName("btnAdmin");
        btnAdmin->setGeometry(QRect(130, 80, 101, 31));
        btnAdmin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  \n"
"    color: white;                \n"
"    font-size: 16px;\n"
"    border-radius: 10px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;  \n"
"}\n"
""));
        btnStudent = new QPushButton(groupBox);
        btnStudent->setObjectName("btnStudent");
        btnStudent->setGeometry(QRect(130, 130, 101, 31));
        btnStudent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  /* \331\204\331\210\331\206 \330\247\331\204\330\256\331\204\331\201\331\212\330\251 */\n"
"    color: white;                /* \331\204\331\210\331\206 \330\247\331\204\331\206\330\265 */\n"
"    font-size: 16px;\n"
"    border-radius: 10px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;   /* \331\204\331\210\331\206 \330\271\331\206\330\257 \330\247\331\204\331\205\330\261\331\210\330\261 \330\250\330\247\331\204\331\205\330\247\331\210\330\263 */\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 595, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "EXAMINATION SYSTEM", nullptr));
        btnAdmin->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        btnStudent->setText(QCoreApplication::translate("MainWindow", "Student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
