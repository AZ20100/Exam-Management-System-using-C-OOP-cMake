#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminlogin.h"
#include "studentmenuwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAdmin_clicked()
{
    AdminLogin *adminForm = new AdminLogin(this);
    adminForm->show();
}

void MainWindow::on_btnStudent_clicked()
{
    StudentMenuWindow *studentMenu = new StudentMenuWindow(this);
    studentMenu->show();
}


