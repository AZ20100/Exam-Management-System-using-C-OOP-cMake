#include "viewquestionswindow.h"
#include "ui_viewquestionswindow.h"
#include "editquestionwindow.h"
#include <QTableWidgetItem>
#include <QPushButton>
#include <QMessageBox>
#include <fstream>

ViewQuestionsWindow::ViewQuestionsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ViewQuestionsWindow)
{
    ui->setupUi(this);
    loadQuestions();
}

ViewQuestionsWindow::~ViewQuestionsWindow()
{
    delete ui;
}

void ViewQuestionsWindow::loadQuestions()
{
    questions.clear();

    std::ifstream fin("questions.txt");
    Question q;
    while (q.load(fin))
        questions.push_back(q);
    fin.close();

    int rows = questions.size();
    ui->tableQuestions->setRowCount(rows);
    ui->tableQuestions->setColumnCount(9);

    QStringList headers = {"ID","Question","A","B","C","D","Correct","Edit","Delete"};
    ui->tableQuestions->setHorizontalHeaderLabels(headers);

    for (int i = 0; i < rows; i++)
    {
        ui->tableQuestions->setItem(i,0,new QTableWidgetItem(QString::number(questions[i].id)));
        ui->tableQuestions->setItem(i,1,new QTableWidgetItem(QString::fromStdString(questions[i].text)));
        ui->tableQuestions->setItem(i,2,new QTableWidgetItem(QString::fromStdString(questions[i].options[0])));
        ui->tableQuestions->setItem(i,3,new QTableWidgetItem(QString::fromStdString(questions[i].options[1])));
        ui->tableQuestions->setItem(i,4,new QTableWidgetItem(QString::fromStdString(questions[i].options[2])));
        ui->tableQuestions->setItem(i,5,new QTableWidgetItem(QString::fromStdString(questions[i].options[3])));
        ui->tableQuestions->setItem(i,6,new QTableWidgetItem(QString(questions[i].correct)));


        QPushButton *editBtn = new QPushButton("Edit");
        ui->tableQuestions->setCellWidget(i,7,editBtn);
        connect(editBtn, &QPushButton::clicked, this, [=](){
            EditQuestionWindow *edit = new EditQuestionWindow(questions[i].id, this);
            edit->show();
        });


        QPushButton *deleteBtn = new QPushButton("Delete");
        ui->tableQuestions->setCellWidget(i,8,deleteBtn);
        connect(deleteBtn, &QPushButton::clicked, this, [=](){
            if(QMessageBox::question(this, "Delete", "Are you sure you want to delete this question?") == QMessageBox::Yes)
            {
                questions.erase(questions.begin() + i);
                saveAllQuestions();
                loadQuestions();
            }
        });
    }

    ui->tableQuestions->horizontalHeader()->setStretchLastSection(true);
    ui->tableQuestions->resizeColumnsToContents();
}

void ViewQuestionsWindow::saveAllQuestions()
{
    std::ofstream out("questions.txt");
    for(auto &q : questions)
        q.save(out);
}



