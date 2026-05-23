/********************************************************************************
** Form generated from reading UI file 'examwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMWINDOW_H
#define UI_EXAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *lblQuestion;
    QRadioButton *rbOptionA;
    QRadioButton *rbOptionB;
    QRadioButton *rbOptionC;
    QRadioButton *rbOptionD;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *btnNext;
    QPushButton *btnBack;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ExamWindow)
    {
        if (ExamWindow->objectName().isEmpty())
            ExamWindow->setObjectName("ExamWindow");
        ExamWindow->resize(800, 600);
        centralwidget = new QWidget(ExamWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 30, 251, 22));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        lblQuestion = new QLabel(centralwidget);
        lblQuestion->setObjectName("lblQuestion");
        lblQuestion->setGeometry(QRect(80, 70, 400, 31));
        lblQuestion->setMinimumSize(QSize(400, 20));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        lblQuestion->setFont(font1);
        lblQuestion->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        lblQuestion->setWordWrap(true);
        rbOptionA = new QRadioButton(centralwidget);
        rbOptionA->setObjectName("rbOptionA");
        rbOptionA->setGeometry(QRect(100, 120, 221, 16));
        rbOptionA->setMinimumSize(QSize(60, 0));
        rbOptionB = new QRadioButton(centralwidget);
        rbOptionB->setObjectName("rbOptionB");
        rbOptionB->setGeometry(QRect(100, 150, 331, 16));
        rbOptionB->setMinimumSize(QSize(60, 0));
        rbOptionC = new QRadioButton(centralwidget);
        rbOptionC->setObjectName("rbOptionC");
        rbOptionC->setGeometry(QRect(100, 180, 411, 16));
        rbOptionC->setMinimumSize(QSize(60, 0));
        rbOptionD = new QRadioButton(centralwidget);
        rbOptionD->setObjectName("rbOptionD");
        rbOptionD->setGeometry(QRect(100, 210, 391, 16));
        rbOptionD->setMinimumSize(QSize(60, 0));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 120, 16, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 150, 16, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 180, 16, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 210, 20, 20));
        btnNext = new QPushButton(centralwidget);
        btnNext->setObjectName("btnNext");
        btnNext->setGeometry(QRect(60, 250, 56, 18));
        btnNext->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnBack = new QPushButton(centralwidget);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(140, 250, 56, 18));
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
        ExamWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ExamWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        ExamWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ExamWindow);
        statusbar->setObjectName("statusbar");
        ExamWindow->setStatusBar(statusbar);

        retranslateUi(ExamWindow);

        QMetaObject::connectSlotsByName(ExamWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ExamWindow)
    {
        ExamWindow->setWindowTitle(QCoreApplication::translate("ExamWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ExamWindow", "Exam is working ", nullptr));
        lblQuestion->setText(QCoreApplication::translate("ExamWindow", "TextLabel", nullptr));
        rbOptionA->setText(QCoreApplication::translate("ExamWindow", "RadioButton", nullptr));
        rbOptionB->setText(QCoreApplication::translate("ExamWindow", "RadioButton", nullptr));
        rbOptionC->setText(QCoreApplication::translate("ExamWindow", "RadioButton", nullptr));
        rbOptionD->setText(QCoreApplication::translate("ExamWindow", "RadioButton", nullptr));
        label_2->setText(QCoreApplication::translate("ExamWindow", "A:", nullptr));
        label_3->setText(QCoreApplication::translate("ExamWindow", "B:", nullptr));
        label_4->setText(QCoreApplication::translate("ExamWindow", "C:", nullptr));
        label_5->setText(QCoreApplication::translate("ExamWindow", "D:", nullptr));
        btnNext->setText(QCoreApplication::translate("ExamWindow", "Next", nullptr));
        btnBack->setText(QCoreApplication::translate("ExamWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamWindow: public Ui_ExamWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMWINDOW_H
