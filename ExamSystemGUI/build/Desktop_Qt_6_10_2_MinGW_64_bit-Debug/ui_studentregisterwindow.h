/********************************************************************************
** Form generated from reading UI file 'studentregisterwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTREGISTERWINDOW_H
#define UI_STUDENTREGISTERWINDOW_H

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

class Ui_StudentRegisterWindow
{
public:
    QWidget *centralwidget;
    QLabel *lblTitle;
    QGroupBox *groupBox;
    QLineEdit *lineUsername;
    QLineEdit *lineName;
    QLineEdit *linePassword;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnRegister;
    QPushButton *btnCancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StudentRegisterWindow)
    {
        if (StudentRegisterWindow->objectName().isEmpty())
            StudentRegisterWindow->setObjectName("StudentRegisterWindow");
        StudentRegisterWindow->resize(800, 600);
        centralwidget = new QWidget(StudentRegisterWindow);
        centralwidget->setObjectName("centralwidget");
        lblTitle = new QLabel(centralwidget);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setGeometry(QRect(200, 40, 101, 16));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 30, 261, 241));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        lineUsername = new QLineEdit(groupBox);
        lineUsername->setObjectName("lineUsername");
        lineUsername->setGeometry(QRect(120, 40, 113, 20));
        lineName = new QLineEdit(groupBox);
        lineName->setObjectName("lineName");
        lineName->setGeometry(QRect(120, 80, 113, 20));
        linePassword = new QLineEdit(groupBox);
        linePassword->setObjectName("linePassword");
        linePassword->setGeometry(QRect(120, 120, 113, 20));
        linePassword->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 40, 61, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 80, 37, 12));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 120, 51, 20));
        btnRegister = new QPushButton(groupBox);
        btnRegister->setObjectName("btnRegister");
        btnRegister->setGeometry(QRect(100, 160, 56, 18));
        btnRegister->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  \n"
"    color: white;                \n"
"    font-size: 9px;\n"
"    border-radius: 10px;\n"
"    padding: 2px 2px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;   \n"
"}"));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setGeometry(QRect(100, 190, 56, 18));
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  \n"
"    color: white;                \n"
"    font-size: 9px;\n"
"    border-radius: 10px;\n"
"    padding: 2px 2px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;   \n"
"}"));
        StudentRegisterWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StudentRegisterWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        StudentRegisterWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StudentRegisterWindow);
        statusbar->setObjectName("statusbar");
        StudentRegisterWindow->setStatusBar(statusbar);

        retranslateUi(StudentRegisterWindow);

        QMetaObject::connectSlotsByName(StudentRegisterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StudentRegisterWindow)
    {
        StudentRegisterWindow->setWindowTitle(QCoreApplication::translate("StudentRegisterWindow", "MainWindow", nullptr));
        lblTitle->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("StudentRegisterWindow", "Student Registration", nullptr));
        label->setText(QCoreApplication::translate("StudentRegisterWindow", "username:", nullptr));
        label_2->setText(QCoreApplication::translate("StudentRegisterWindow", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("StudentRegisterWindow", "Password:", nullptr));
        btnRegister->setText(QCoreApplication::translate("StudentRegisterWindow", "Register", nullptr));
        btnCancel->setText(QCoreApplication::translate("StudentRegisterWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentRegisterWindow: public Ui_StudentRegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTREGISTERWINDOW_H
