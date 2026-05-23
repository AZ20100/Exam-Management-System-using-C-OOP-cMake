#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <fstream>
using namespace std;

class Question {
public:
    int id;
    string text;
    string options[4];
    char correct;

    Question();

    void input(int qid);
    void save(ofstream& out);
    bool load(ifstream& in);
    void display(bool showId = false);
    bool check(char ans);
};

#endif

