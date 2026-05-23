#ifndef STUDENTREGISTERWINDOW_H
#define STUDENTREGISTERWINDOW_H

#include <QMainWindow>

namespace Ui { class StudentRegisterWindow; }

class StudentRegisterWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit StudentRegisterWindow(QWidget *parent = nullptr);
    ~StudentRegisterWindow();

private slots:
    void on_btnRegister_clicked();
    void on_btnCancel_clicked();

private:
    Ui::StudentRegisterWindow *ui;
    bool usernameExists(const QString &username);
};

#endif
