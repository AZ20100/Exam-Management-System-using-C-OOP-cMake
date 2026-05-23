#include "examwindow.h"
#include "ui_examwindow.h"
#include <QMessageBox>
#include <QButtonGroup>
#include <fstream>

ExamWindow::ExamWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ExamWindow),
    currentIndex(0),
    score(0)
{
    ui->setupUi(this);


    QButtonGroup* group = new QButtonGroup(this);
    group->addButton(ui->rbOptionA);
    group->addButton(ui->rbOptionB);
    group->addButton(ui->rbOptionC);
    group->addButton(ui->rbOptionD);

    loadQuestions();

    answers.resize(questions.size(), '\0');

    if(!questions.empty())
        showQuestion(0);

}

ExamWindow::~ExamWindow()
{
    delete ui;
}

void ExamWindow::loadQuestions()
{
    questions.clear();
    std::ifstream fin("questions.txt");
    Question q;
    while(q.load(fin))
        questions.push_back(q);
    fin.close();
}

void ExamWindow::showQuestion(size_t index)
{
    if(index >= questions.size())
        return;

    ui->lblQuestion->setText(QString::fromStdString(questions[index].text));
    ui->rbOptionA->setText(QString::fromStdString(questions[index].options[0]));
    ui->rbOptionB->setText(QString::fromStdString(questions[index].options[1]));
    ui->rbOptionC->setText(QString::fromStdString(questions[index].options[2]));
    ui->rbOptionD->setText(QString::fromStdString(questions[index].options[3]));


    ui->rbOptionA->setAutoExclusive(false);
    ui->rbOptionB->setAutoExclusive(false);
    ui->rbOptionC->setAutoExclusive(false);
    ui->rbOptionD->setAutoExclusive(false);

    ui->rbOptionA->setChecked(false);
    ui->rbOptionB->setChecked(false);
    ui->rbOptionC->setChecked(false);
    ui->rbOptionD->setChecked(false);

    ui->rbOptionA->setAutoExclusive(true);
    ui->rbOptionB->setAutoExclusive(true);
    ui->rbOptionC->setAutoExclusive(true);
    ui->rbOptionD->setAutoExclusive(true);


    ui->btnBack->setEnabled(index != 0);

    ui->btnNext->setText(index == questions.size()-1 ? "Submit" : "Next");
}


void ExamWindow::on_btnNext_clicked()
{

    char selected = '\0';
    if(ui->rbOptionA->isChecked()) selected = 'A';
    else if(ui->rbOptionB->isChecked()) selected = 'B';
    else if(ui->rbOptionC->isChecked()) selected = 'C';
    else if(ui->rbOptionD->isChecked()) selected = 'D';

    answers[currentIndex] = selected;

    if(currentIndex == questions.size()-1) {
        on_btnSubmit_clicked();
        return;
    }

    currentIndex++;
    showQuestion(currentIndex);
}

void ExamWindow::on_btnBack_clicked()
{
    char selected = '\0';
    if(ui->rbOptionA->isChecked()) selected = 'A';
    else if(ui->rbOptionB->isChecked()) selected = 'B';
    else if(ui->rbOptionC->isChecked()) selected = 'C';
    else if(ui->rbOptionD->isChecked()) selected = 'D';

    answers[currentIndex] = selected;

    if(currentIndex > 0){
        currentIndex--;
        showQuestion(currentIndex);
    }
}

void ExamWindow::on_btnSubmit_clicked()
{
    score = 0;
    for(size_t i = 0; i < questions.size(); i++)
        if(answers[i] == questions[i].correct)
            score++;

    int total = questions.size();
    double percentage = (double)score / total * 100;

    QString status = (percentage >= 50.0) ? "Pass ✅" : "Fail ❌";

    QMessageBox::information(this, "Result",
                             QString("Your score: %1 / %2\nPercentage: %3%\nStatus: %4")
                                 .arg(score)
                                 .arg(total)
                                 .arg(percentage, 0, 'f', 1)
                                 .arg(status));

    this->close();
}




