/********************************************************************************
** Form generated from reading UI file 'addquestionwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDQUESTIONWINDOW_H
#define UI_ADDQUESTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddQuestionWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QTextEdit *txtQuestion;
    QLineEdit *optA;
    QLineEdit *optB;
    QLineEdit *optC;
    QLineEdit *optD;
    QComboBox *comboCorrect;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddQuestionWindow)
    {
        if (AddQuestionWindow->objectName().isEmpty())
            AddQuestionWindow->setObjectName("AddQuestionWindow");
        AddQuestionWindow->resize(800, 600);
        centralwidget = new QWidget(AddQuestionWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 40, 171, 31));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 20, 351, 291));
        groupBox->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 81, 16));
        QFont font1;
        font1.setBold(false);
        label_2->setFont(font1);
        txtQuestion = new QTextEdit(groupBox);
        txtQuestion->setObjectName("txtQuestion");
        txtQuestion->setGeometry(QRect(100, 40, 191, 31));
        optA = new QLineEdit(groupBox);
        optA->setObjectName("optA");
        optA->setGeometry(QRect(100, 80, 113, 20));
        optB = new QLineEdit(groupBox);
        optB->setObjectName("optB");
        optB->setGeometry(QRect(100, 110, 113, 20));
        optC = new QLineEdit(groupBox);
        optC->setObjectName("optC");
        optC->setGeometry(QRect(100, 140, 113, 20));
        optD = new QLineEdit(groupBox);
        optD->setObjectName("optD");
        optD->setGeometry(QRect(100, 170, 113, 20));
        comboCorrect = new QComboBox(groupBox);
        comboCorrect->addItem(QString());
        comboCorrect->addItem(QString());
        comboCorrect->addItem(QString());
        comboCorrect->addItem(QString());
        comboCorrect->setObjectName("comboCorrect");
        comboCorrect->setGeometry(QRect(130, 210, 53, 22));
        btnSave = new QPushButton(groupBox);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(70, 250, 56, 18));
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
"}\n"
""));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setGeometry(QRect(180, 250, 56, 18));
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
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 80, 51, 16));
        label_3->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 110, 51, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 140, 51, 16));
        label_5->setFont(font1);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 170, 51, 20));
        label_6->setFont(font1);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 210, 81, 20));
        label_7->setFont(font1);
        AddQuestionWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddQuestionWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        AddQuestionWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AddQuestionWindow);
        statusbar->setObjectName("statusbar");
        AddQuestionWindow->setStatusBar(statusbar);

        retranslateUi(AddQuestionWindow);

        QMetaObject::connectSlotsByName(AddQuestionWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddQuestionWindow)
    {
        AddQuestionWindow->setWindowTitle(QCoreApplication::translate("AddQuestionWindow", "MainWindow", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("AddQuestionWindow", "Add New Question", nullptr));
        label_2->setText(QCoreApplication::translate("AddQuestionWindow", "Enter question:", nullptr));
        txtQuestion->setHtml(QCoreApplication::translate("AddQuestionWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:700; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", nullptr));
        optA->setText(QString());
        optB->setText(QString());
        optC->setText(QString());
        optD->setText(QString());
        comboCorrect->setItemText(0, QCoreApplication::translate("AddQuestionWindow", "A", nullptr));
        comboCorrect->setItemText(1, QCoreApplication::translate("AddQuestionWindow", "B", nullptr));
        comboCorrect->setItemText(2, QCoreApplication::translate("AddQuestionWindow", "C", nullptr));
        comboCorrect->setItemText(3, QCoreApplication::translate("AddQuestionWindow", "D", nullptr));

        btnSave->setText(QCoreApplication::translate("AddQuestionWindow", "Save", nullptr));
        btnCancel->setText(QCoreApplication::translate("AddQuestionWindow", "Cancel", nullptr));
        label_3->setText(QCoreApplication::translate("AddQuestionWindow", "Option A:", nullptr));
        label_4->setText(QCoreApplication::translate("AddQuestionWindow", "Option B:", nullptr));
        label_5->setText(QCoreApplication::translate("AddQuestionWindow", "Option C:", nullptr));
        label_6->setText(QCoreApplication::translate("AddQuestionWindow", "Option D:", nullptr));
        label_7->setText(QCoreApplication::translate("AddQuestionWindow", "Choose Answer:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddQuestionWindow: public Ui_AddQuestionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDQUESTIONWINDOW_H
