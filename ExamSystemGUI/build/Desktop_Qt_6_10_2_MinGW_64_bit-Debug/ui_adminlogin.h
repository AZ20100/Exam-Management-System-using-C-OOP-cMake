/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminLogin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QLineEdit *linePassword;
    QLabel *label_2;
    QPushButton *btnLogin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminLogin)
    {
        if (AdminLogin->objectName().isEmpty())
            AdminLogin->setObjectName("AdminLogin");
        AdminLogin->resize(800, 600);
        centralwidget = new QWidget(AdminLogin);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 20, 91, 16));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 20, 271, 191));
        QFont font1;
        font1.setBold(true);
        groupBox->setFont(font1);
        linePassword = new QLineEdit(groupBox);
        linePassword->setObjectName("linePassword");
        linePassword->setGeometry(QRect(80, 60, 113, 20));
        linePassword->setEchoMode(QLineEdit::EchoMode::Password);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 61, 16));
        QFont font2;
        font2.setBold(false);
        label_2->setFont(font2);
        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(90, 100, 71, 31));
        btnLogin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  \n"
"    color: white;              \n"
"    font-size: 10px;\n"
"    border-radius: 10px;\n"
"    padding: 2px 2px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;   \n"
"}\n"
""));
        AdminLogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminLogin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        AdminLogin->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminLogin);
        statusbar->setObjectName("statusbar");
        AdminLogin->setStatusBar(statusbar);

        retranslateUi(AdminLogin);

        QMetaObject::connectSlotsByName(AdminLogin);
    } // setupUi

    void retranslateUi(QMainWindow *AdminLogin)
    {
        AdminLogin->setWindowTitle(QCoreApplication::translate("AdminLogin", "MainWindow", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("AdminLogin", "Admin Login", nullptr));
        label_2->setText(QCoreApplication::translate("AdminLogin", "username:", nullptr));
        btnLogin->setText(QCoreApplication::translate("AdminLogin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLogin: public Ui_AdminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
