/********************************************************************************
** Form generated from reading UI file 'studentmenuwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMENUWINDOW_H
#define UI_STUDENTMENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentMenuWindow
{
public:
    QWidget *centralwidget;
    QLabel *lblTitle;
    QGroupBox *groupBox;
    QPushButton *btnRegister;
    QPushButton *btnLogin;
    QPushButton *btnBack;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StudentMenuWindow)
    {
        if (StudentMenuWindow->objectName().isEmpty())
            StudentMenuWindow->setObjectName("StudentMenuWindow");
        StudentMenuWindow->resize(800, 600);
        centralwidget = new QWidget(StudentMenuWindow);
        centralwidget->setObjectName("centralwidget");
        lblTitle = new QLabel(centralwidget);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setGeometry(QRect(210, 60, 81, 16));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 10, 261, 191));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        btnRegister = new QPushButton(groupBox);
        btnRegister->setObjectName("btnRegister");
        btnRegister->setGeometry(QRect(80, 40, 101, 31));
        btnRegister->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  \n"
"    color: white;                \n"
"    font-size: 16px;\n"
"    border-radius: 10px;\n"
"    padding: 2px 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;  \n"
"}"));
        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(80, 80, 101, 31));
        btnLogin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  \n"
"    color: white;                \n"
"    font-size: 16px;\n"
"    border-radius: 10px;\n"
"    padding: 2px 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;  \n"
"}"));
        btnBack = new QPushButton(groupBox);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(80, 120, 101, 31));
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  \n"
"    color: white;                \n"
"    font-size: 16px;\n"
"    border-radius: 10px;\n"
"    padding: 2px 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;  \n"
"}"));
        StudentMenuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StudentMenuWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        StudentMenuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StudentMenuWindow);
        statusbar->setObjectName("statusbar");
        StudentMenuWindow->setStatusBar(statusbar);

        retranslateUi(StudentMenuWindow);

        QMetaObject::connectSlotsByName(StudentMenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StudentMenuWindow)
    {
        StudentMenuWindow->setWindowTitle(QCoreApplication::translate("StudentMenuWindow", "MainWindow", nullptr));
        lblTitle->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("StudentMenuWindow", "Student Menu", nullptr));
        btnRegister->setText(QCoreApplication::translate("StudentMenuWindow", "Register", nullptr));
        btnLogin->setText(QCoreApplication::translate("StudentMenuWindow", "Login", nullptr));
        btnBack->setText(QCoreApplication::translate("StudentMenuWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentMenuWindow: public Ui_StudentMenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMENUWINDOW_H
