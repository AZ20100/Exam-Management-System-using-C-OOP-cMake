#ifndef EXAMWINDOW_H
#define EXAMWINDOW_H

#include <QTimer>
#include <QMainWindow>
#include <vector>
#include "Question.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ExamWindow; }
QT_END_NAMESPACE

class ExamWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExamWindow(QWidget *parent = nullptr);
    ~ExamWindow();

private slots:
    void on_btnNext_clicked();
    void on_btnBack_clicked();
    void on_btnSubmit_clicked();

private:
    Ui::ExamWindow *ui;
    std::vector<Question> questions;
    std::vector<char> answers;
    size_t currentIndex;
    int score;
    QTimer *timer;
    int timeLeft;

    void loadQuestions();
    void showQuestion(size_t index);
};

#endif




