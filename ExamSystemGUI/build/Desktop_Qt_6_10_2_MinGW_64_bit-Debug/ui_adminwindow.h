/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *btnAdd;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QPushButton *btnView;
    QPushButton *btnLogout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->resize(800, 600);
        AdminWindow->setDockNestingEnabled(false);
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 20, 261, 241));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        btnAdd = new QPushButton(groupBox);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(60, 30, 151, 31));
        btnAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  \n"
"    color: white;                \n"
"    font-size: 16px;\n"
"    border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;  \n"
"}\n"
""));
        btnEdit = new QPushButton(groupBox);
        btnEdit->setObjectName("btnEdit");
        btnEdit->setGeometry(QRect(60, 70, 151, 31));
        btnEdit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  \n"
"    color: white;                \n"
"    font-size: 16px;\n"
"    border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;  \n"
"}"));
        btnDelete = new QPushButton(groupBox);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(60, 110, 151, 31));
        btnDelete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  \n"
"    color: white;                \n"
"    font-size: 16px;\n"
"    border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;  \n"
"}"));
        btnView = new QPushButton(groupBox);
        btnView->setObjectName("btnView");
        btnView->setGeometry(QRect(60, 150, 151, 31));
        btnView->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  \n"
"    color: white;                \n"
"    font-size: 16px;\n"
"    border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;  \n"
"}"));
        btnLogout = new QPushButton(groupBox);
        btnLogout->setObjectName("btnLogout");
        btnLogout->setGeometry(QRect(60, 190, 151, 31));
        btnLogout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;  \n"
"    color: white;                \n"
"    font-size: 16px;\n"
"    border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;  \n"
"}"));
        AdminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        AdminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminWindow);
        statusbar->setObjectName("statusbar");
        AdminWindow->setStatusBar(statusbar);

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AdminWindow", "AdminMenu", nullptr));
        btnAdd->setText(QCoreApplication::translate("AdminWindow", "Add Question", nullptr));
        btnEdit->setText(QCoreApplication::translate("AdminWindow", "Edit Question", nullptr));
        btnDelete->setText(QCoreApplication::translate("AdminWindow", "Delete Question", nullptr));
        btnView->setText(QCoreApplication::translate("AdminWindow", "View Questions", nullptr));
        btnLogout->setText(QCoreApplication::translate("AdminWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
