/********************************************************************************
** Form generated from reading UI file 'editquestionwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITQUESTIONWINDOW_H
#define UI_EDITQUESTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditQuestionWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineQuestion;
    QLineEdit *optA;
    QLineEdit *optB;
    QLineEdit *optC;
    QLineEdit *optD;
    QComboBox *comboCorrect;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditQuestionWindow)
    {
        if (EditQuestionWindow->objectName().isEmpty())
            EditQuestionWindow->setObjectName("EditQuestionWindow");
        EditQuestionWindow->resize(800, 600);
        centralwidget = new QWidget(EditQuestionWindow);
        centralwidget->setObjectName("centralwidget");
        lineQuestion = new QLineEdit(centralwidget);
        lineQuestion->setObjectName("lineQuestion");
        lineQuestion->setGeometry(QRect(150, 30, 113, 20));
        optA = new QLineEdit(centralwidget);
        optA->setObjectName("optA");
        optA->setGeometry(QRect(150, 60, 113, 20));
        optB = new QLineEdit(centralwidget);
        optB->setObjectName("optB");
        optB->setGeometry(QRect(150, 90, 113, 20));
        optC = new QLineEdit(centralwidget);
        optC->setObjectName("optC");
        optC->setGeometry(QRect(150, 120, 113, 20));
        optD = new QLineEdit(centralwidget);
        optD->setObjectName("optD");
        optD->setGeometry(QRect(150, 150, 113, 20));
        comboCorrect = new QComboBox(centralwidget);
        comboCorrect->setObjectName("comboCorrect");
        comboCorrect->setGeometry(QRect(180, 180, 53, 22));
        btnSave = new QPushButton(centralwidget);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(140, 220, 56, 18));
        btnSave->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnCancel = new QPushButton(centralwidget);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setGeometry(QRect(210, 220, 56, 18));
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
        EditQuestionWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditQuestionWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        EditQuestionWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EditQuestionWindow);
        statusbar->setObjectName("statusbar");
        EditQuestionWindow->setStatusBar(statusbar);

        retranslateUi(EditQuestionWindow);

        QMetaObject::connectSlotsByName(EditQuestionWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EditQuestionWindow)
    {
        EditQuestionWindow->setWindowTitle(QCoreApplication::translate("EditQuestionWindow", "MainWindow", nullptr));
        btnSave->setText(QCoreApplication::translate("EditQuestionWindow", "Save", nullptr));
        btnCancel->setText(QCoreApplication::translate("EditQuestionWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditQuestionWindow: public Ui_EditQuestionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITQUESTIONWINDOW_H
