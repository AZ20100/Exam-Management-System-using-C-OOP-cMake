#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "mainwindow.h"
#include "viewquestionswindow.h"
#include "addquestionwindow.h"
#include <QMessageBox>

AdminWindow::AdminWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}


void AdminWindow::on_btnAdd_clicked()
{
    AddQuestionWindow *add = new AddQuestionWindow(this);
    add->show();
}

void AdminWindow::on_btnView_clicked()
{
    ViewQuestionsWindow *view = new ViewQuestionsWindow(this);
    view->show();
}

void AdminWindow::on_btnLogout_clicked()
{
    MainWindow *main = new MainWindow();
    main->show();
    this->close();
}

void AdminWindow::on_btnEdit_clicked()
{
    QMessageBox::information(this, "Info", "Please use 'View Questions' to edit a question.");
}

void AdminWindow::on_btnDelete_clicked()
{
    QMessageBox::information(this, "Info", "Please use 'View Questions' to delete a question.");
}





