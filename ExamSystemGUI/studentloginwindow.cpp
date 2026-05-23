#include "studentloginwindow.h"
#include "ui_studentloginwindow.h"
#include "studentregisterwindow.h"
#include <QMessageBox>
#include <fstream>

StudentLoginWindow::StudentLoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StudentLoginWindow)
{
    ui->setupUi(this);
    loadStudents();
}

StudentLoginWindow::~StudentLoginWindow()
{
    delete ui;
}

void StudentLoginWindow::loadStudents()
{
    students.clear();
    std::ifstream fin("students.txt");
    Student s;
    while(s.load(fin))
        students.push_back(s);
    fin.close();
}

void StudentLoginWindow::on_btnLogin_clicked()
{
    std::string username = ui->lineUsername->text().toStdString();
    std::string password = ui->linePassword->text().toStdString();

    bool found = false;
    for(auto &s : students){
        if(s.username == username && s.password == password){
            found = true;
            break;
        }
    }

    if(found){
        QMessageBox::information(this, "Success", "Login successful!");
        ExamWindow *exam = new ExamWindow(this);
        exam->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Error", "Wrong username or password!");
    }
}

void StudentLoginWindow::on_btnBack_clicked()
{
    this->close();
}






