#ifndef STUDENTLOGINWINDOW_H
#define STUDENTLOGINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "Student.h"
#include "examwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class StudentLoginWindow; }
QT_END_NAMESPACE

class StudentLoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StudentLoginWindow(QWidget *parent = nullptr);
    ~StudentLoginWindow();

private slots:
    void on_btnLogin_clicked();
    void on_btnBack_clicked();

private:
    Ui::StudentLoginWindow *ui;
    std::vector<Student> students;
    void loadStudents();
};

#endif





