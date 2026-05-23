#include "studentmenuwindow.h"
#include "ui_studentmenuwindow.h"
#include "studentregisterwindow.h"
#include "studentloginwindow.h"

StudentMenuWindow::StudentMenuWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StudentMenuWindow)
{
    ui->setupUi(this);
}

StudentMenuWindow::~StudentMenuWindow()
{
    delete ui;
}

void StudentMenuWindow::on_btnRegister_clicked()
{
    StudentRegisterWindow *reg = new StudentRegisterWindow(this);
    reg->show();
}

void StudentMenuWindow::on_btnLogin_clicked()
{
    StudentLoginWindow *login = new StudentLoginWindow(this);
    login->show();
}

void StudentMenuWindow::on_btnBack_clicked()
{
    this->close();
}




