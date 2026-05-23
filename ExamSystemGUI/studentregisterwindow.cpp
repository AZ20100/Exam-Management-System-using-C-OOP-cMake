#include "studentregisterwindow.h"
#include "ui_studentregisterwindow.h"
#include <QMessageBox>
#include <fstream>
#include "Student.h"

StudentRegisterWindow::StudentRegisterWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::StudentRegisterWindow)
{
    ui->setupUi(this);
}

StudentRegisterWindow::~StudentRegisterWindow()
{
    delete ui;
}

bool StudentRegisterWindow::usernameExists(const QString &username)
{
    std::ifstream fin("students.txt");
    Student s;
    while(s.load(fin)){
        if(QString::fromStdString(s.username) == username)
            return true;
    }
    return false;
}

void StudentRegisterWindow::on_btnRegister_clicked()
{
    QString username = ui->lineUsername->text();
    QString name = ui->lineName->text();
    QString password = ui->linePassword->text();

    if(username.isEmpty() || name.isEmpty() || password.isEmpty()){
        QMessageBox::warning(this, "Error", "Please fill all fields");
        return;
    }

    if(usernameExists(username)){
        QMessageBox::warning(this, "Error", "Username already taken");
        return;
    }

    std::ofstream fout("students.txt", std::ios::app);
    fout << username.toStdString() << " " << name.toStdString() << " " << password.toStdString() << "\n";

    QMessageBox::information(this, "Success", "Registration successful!");
    this->close();
}

void StudentRegisterWindow::on_btnCancel_clicked()
{
    this->close();
}


