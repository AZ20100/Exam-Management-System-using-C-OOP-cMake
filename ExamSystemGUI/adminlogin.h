#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class AdminLogin; }
QT_END_NAMESPACE

class AdminLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminLogin(QWidget *parent = nullptr);
    ~AdminLogin();

private slots:
    void on_btnLogin_clicked();

private:
    Ui::AdminLogin *ui;
};

#endif


