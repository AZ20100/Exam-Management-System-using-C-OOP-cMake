#ifndef EDITQUESTIONWINDOW_H
#define EDITQUESTIONWINDOW_H

#include <QMainWindow>
#include "Question.h"
#include <vector>

namespace Ui {
class EditQuestionWindow;
}

class EditQuestionWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditQuestionWindow(int questionId, QWidget *parent = nullptr);
    ~EditQuestionWindow();

private slots:
    void on_btnSave_clicked();
    void on_btnCancel_clicked();

private:
    Ui::EditQuestionWindow *ui;
    Question currentQuestion;
    int questionId;
    std::vector<Question> questions;

    void loadQuestion();
    void saveAllQuestions();
};

#endif

