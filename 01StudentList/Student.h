//
// Created by Thomas on 3/22/2018.
//

#ifndef CPP_SUBJECT_H
#define CPP_SUBJECT_H

#include <cstdlib>
#include <sstream>
#include <string>

using namespace std;

class Student{
    private:
        string fristName;
        string secondName;
        int age;
    public:
        Student(string fristName, string secondName, int age) : fristName(fristName), secondName(secondName), age(age) {}
        virtual ~Student();
        string toString();

    const string &getFristName() const;

    void setFristName(const string &fristName);

    const string &getSecondName() const;

    void setSecondName(const string &secondName);

    int getAge() const;

    void setAge(int age);

    bool operator!=(const Student &rhs) const;
        bool operator==(const Student &rhs) const;


};

#endif //CPP_SUBJECT_H
