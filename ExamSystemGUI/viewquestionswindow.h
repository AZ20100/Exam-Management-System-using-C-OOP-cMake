#ifndef VIEWQUESTIONSWINDOW_H
#define VIEWQUESTIONSWINDOW_H

#include <QMainWindow>
#include "Question.h"
#include <vector>

namespace Ui {
class ViewQuestionsWindow;
}

class ViewQuestionsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ViewQuestionsWindow(QWidget *parent = nullptr);
    ~ViewQuestionsWindow();

    void loadQuestions();


private:
    Ui::ViewQuestionsWindow *ui;
    std::vector<Question> questions;

    void saveAllQuestions();
};

#endif


