/********************************************************************************
** Form generated from reading UI file 'viewquestionswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWQUESTIONSWINDOW_H
#define UI_VIEWQUESTIONSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewQuestionsWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableQuestions;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ViewQuestionsWindow)
    {
        if (ViewQuestionsWindow->objectName().isEmpty())
            ViewQuestionsWindow->setObjectName("ViewQuestionsWindow");
        ViewQuestionsWindow->resize(800, 600);
        centralwidget = new QWidget(ViewQuestionsWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tableQuestions = new QTableWidget(centralwidget);
        if (tableQuestions->columnCount() < 7)
            tableQuestions->setColumnCount(7);
        tableQuestions->setObjectName("tableQuestions");
        tableQuestions->setColumnCount(7);

        verticalLayout->addWidget(tableQuestions);

        ViewQuestionsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ViewQuestionsWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        ViewQuestionsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ViewQuestionsWindow);
        statusbar->setObjectName("statusbar");
        ViewQuestionsWindow->setStatusBar(statusbar);

        retranslateUi(ViewQuestionsWindow);

        QMetaObject::connectSlotsByName(ViewQuestionsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ViewQuestionsWindow)
    {
        ViewQuestionsWindow->setWindowTitle(QCoreApplication::translate("ViewQuestionsWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewQuestionsWindow: public Ui_ViewQuestionsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWQUESTIONSWINDOW_H
