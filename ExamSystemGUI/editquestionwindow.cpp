#include "editquestionwindow.h"
#include "ui_editquestionwindow.h"
#include <fstream>
#include <QMessageBox>

EditQuestionWindow::EditQuestionWindow(int qid, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditQuestionWindow),
    questionId(qid)
{
    ui->setupUi(this);
    ui->comboCorrect->addItems({"A","B","C","D"});
    loadQuestion();
}

EditQuestionWindow::~EditQuestionWindow()
{
    delete ui;
}

void EditQuestionWindow::loadQuestion()
{
    questions.clear();
    std::ifstream fin("questions.txt");
    Question q;
    while(q.load(fin))
        questions.push_back(q);
    fin.close();

    for(auto &q : questions){
        if(q.id == questionId){
            currentQuestion = q;
            break;
        }
    }

    ui->lineQuestion->setText(QString::fromStdString(currentQuestion.text));
    ui->optA->setText(QString::fromStdString(currentQuestion.options[0]));
    ui->optB->setText(QString::fromStdString(currentQuestion.options[1]));
    ui->optC->setText(QString::fromStdString(currentQuestion.options[2]));
    ui->optD->setText(QString::fromStdString(currentQuestion.options[3]));
    ui->comboCorrect->setCurrentText(QString(currentQuestion.correct));
}

void EditQuestionWindow::on_btnSave_clicked()
{
    currentQuestion.text = ui->lineQuestion->text().toStdString();
    currentQuestion.options[0] = ui->optA->text().toStdString();
    currentQuestion.options[1] = ui->optB->text().toStdString();
    currentQuestion.options[2] = ui->optC->text().toStdString();
    currentQuestion.options[3] = ui->optD->text().toStdString();
    currentQuestion.correct = ui->comboCorrect->currentText().toStdString()[0];

    for(auto &q : questions){
        if(q.id == questionId){
            q = currentQuestion;
            break;
        }
    }

    saveAllQuestions();

    QMessageBox::information(this, "Success", "Question updated successfully!");
    this->close();
}

void EditQuestionWindow::on_btnCancel_clicked()
{
    this->close();
}

void EditQuestionWindow::saveAllQuestions()
{
    std::ofstream out("questions.txt");
    for(auto &q : questions)
        q.save(out);
}


