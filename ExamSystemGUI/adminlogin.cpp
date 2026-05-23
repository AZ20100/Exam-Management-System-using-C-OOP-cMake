#include "adminlogin.h"
#include "ui_adminlogin.h"
#include "adminwindow.h"
#include <QMessageBox>

AdminLogin::AdminLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminLogin)
{
    ui->setupUi(this);
}

AdminLogin::~AdminLogin()
{
    delete ui;
}

void AdminLogin::on_btnLogin_clicked()
{
    QString password = ui->linePassword->text();

    if (password == "admin123") {
        QMessageBox::information(this, "Success", "Login Successful!");

        AdminWindow *admin = new AdminWindow();
        admin->show();

        this->close();
    }
    else {
        QMessageBox::warning(this, "Error", "Wrong Password!");
    }
}


