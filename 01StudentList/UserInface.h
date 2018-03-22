//
// Created by Thomas on 3/22/2018.
//

#ifndef CPP_USERINFACE_H
#define CPP_USERINFACE_H

#include <string>
#include <vector>
#include <iostream>
#include "student.h"

using namespace std;

class UserInterface{
    private :
        vector<Student> studentList;
        void printAllStudents();
        void addNewStudent();
        void calculateAverage();
        int readNumber(string inputText);
        void printMenu();
    public:
        void start();
};


#endif //CPP_USERINFACE_H
