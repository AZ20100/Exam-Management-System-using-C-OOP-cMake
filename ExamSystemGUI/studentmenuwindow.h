#ifndef STUDENTMENUWINDOW_H
#define STUDENTMENUWINDOW_H

#include <QMainWindow>

namespace Ui {
class StudentMenuWindow;
}

class StudentMenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StudentMenuWindow(QWidget *parent = nullptr);
    ~StudentMenuWindow();

private slots:
    void on_btnRegister_clicked();
    void on_btnLogin_clicked();
    void on_btnBack_clicked();

private:
    Ui::StudentMenuWindow *ui;
};

#endif




