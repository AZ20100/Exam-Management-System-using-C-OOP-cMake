#include "Question.h"
#include <iostream>
#include <cctype>

Question::Question() : id(0), correct(' ') {}

void Question::input(int qid) {
    id = qid;
    cin.ignore();
    cout << "Enter question: ";
    getline(cin, text);

    for (int i = 0; i < 4; i++) {
        cout << "Option " << char('A' + i) << ": ";
        getline(cin, options[i]);
    }

    do {
        cout << "Correct option (A/B/C/D): ";
        cin >> correct;
        correct = toupper(correct);
    } while (correct < 'A' || correct > 'D');
}

void Question::save(ofstream& out) {
    out << id << "\n" << text << "\n";
    for (int i = 0; i < 4; i++)
        out << options[i] << "\n";
    out << correct << "\n";
}

bool Question::load(ifstream& in) {
    if (!(in >> id)) return false;
    in.ignore();
    getline(in, text);
    for (int i = 0; i < 4; i++)
        getline(in, options[i]);
    in >> correct;
    in.ignore();
    return true;
}

void Question::display(bool showId) {
    if (showId)
        cout << "\nID: " << id << endl;

    cout << text << endl;
    for (int i = 0; i < 4; i++)
        cout << char('A' + i) << ". " << options[i] << endl;
}

bool Question::check(char ans) {
    return toupper(ans) == correct;
}


