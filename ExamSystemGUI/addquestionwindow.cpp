#include "addquestionwindow.h"
#include "ui_addquestionwindow.h"
#include <QMessageBox>
#include <fstream>
#include <vector>

AddQuestionWindow::AddQuestionWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddQuestionWindow)
{
    ui->setupUi(this);
}

AddQuestionWindow::~AddQuestionWindow()
{
    delete ui;
}

void AddQuestionWindow::on_btnSave_clicked()
{
    Question q;
    q.text = ui->txtQuestion->toPlainText().toStdString();
    q.options[0] = ui->optA->text().toStdString();
    q.options[1] = ui->optB->text().toStdString();
    q.options[2] = ui->optC->text().toStdString();
    q.options[3] = ui->optD->text().toStdString();
    q.correct = ui->comboCorrect->currentText().at(0).toLatin1();


    std::ifstream fin("questions.txt");
    Question temp;
    int count = 0;
    while (temp.load(fin)) count++;
    fin.close();
    q.id = count + 1;


    std::ofstream out("questions.txt", std::ios::app);
    q.save(out);
    out.close();

    QMessageBox::information(this, "Saved", "Question added successfully!");
    this->close();
}

void AddQuestionWindow::on_btnCancel_clicked()
{
    this->close();
}

