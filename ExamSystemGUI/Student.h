#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <fstream>

class Student {
public:
    std::string username;
    std::string name;
    std::string password;

    Student() = default;

    bool load(std::ifstream &fin) {
        if(fin >> username >> name >> password)
            return true;
        return false;
    }

    void save(std::ofstream &fout) {
        fout << username << " " << name << " " << password << "\n";
    }
};

#endif



