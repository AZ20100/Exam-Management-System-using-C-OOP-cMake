#ifndef ADDQUESTIONWINDOW_H
#define ADDQUESTIONWINDOW_H

#include <QMainWindow>
#include "Question.h"

namespace Ui {
class AddQuestionWindow;
}

class AddQuestionWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddQuestionWindow(QWidget *parent = nullptr);
    ~AddQuestionWindow();

private slots:
    void on_btnSave_clicked();
    void on_btnCancel_clicked();

private:
    Ui::AddQuestionWindow *ui;
};

#endif

