/********************************************************************************
** Form generated from reading UI file 'studentloginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTLOGINWINDOW_H
#define UI_STUDENTLOGINWINDOW_H

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

class Ui_StudentLoginWindow
{
public:
    QWidget *centralwidget;
    QLabel *lblTitle;
    QGroupBox *groupBox;
    QLineEdit *lineUsername;
    QLineEdit *linePassword;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnLogin;
    QPushButton *btnBack;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StudentLoginWindow)
    {
        if (StudentLoginWindow->objectName().isEmpty())
            StudentLoginWindow->setObjectName("StudentLoginWindow");
        StudentLoginWindow->resize(800, 600);
        centralwidget = new QWidget(StudentLoginWindow);
        centralwidget->setObjectName("centralwidget");
        lblTitle = new QLabel(centralwidget);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setGeometry(QRect(200, 30, 71, 16));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 20, 261, 201));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        lineUsername = new QLineEdit(groupBox);
        lineUsername->setObjectName("lineUsername");
        lineUsername->setGeometry(QRect(90, 30, 113, 20));
        linePassword = new QLineEdit(groupBox);
        linePassword->setObjectName("linePassword");
        linePassword->setGeometry(QRect(90, 70, 113, 20));
        linePassword->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 61, 20));
        QFont font1;
        font1.setBold(false);
        label->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 51, 20));
        label_2->setFont(font1);
        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(110, 110, 56, 18));
        btnLogin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnBack = new QPushButton(groupBox);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(110, 140, 56, 18));
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        StudentLoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StudentLoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        StudentLoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StudentLoginWindow);
        statusbar->setObjectName("statusbar");
        StudentLoginWindow->setStatusBar(statusbar);

        retranslateUi(StudentLoginWindow);

        QMetaObject::connectSlotsByName(StudentLoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StudentLoginWindow)
    {
        StudentLoginWindow->setWindowTitle(QCoreApplication::translate("StudentLoginWindow", "MainWindow", nullptr));
        lblTitle->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("StudentLoginWindow", "Student Login", nullptr));
        label->setText(QCoreApplication::translate("StudentLoginWindow", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("StudentLoginWindow", "Password:", nullptr));
        btnLogin->setText(QCoreApplication::translate("StudentLoginWindow", "Login", nullptr));
        btnBack->setText(QCoreApplication::translate("StudentLoginWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentLoginWindow: public Ui_StudentLoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTLOGINWINDOW_H
