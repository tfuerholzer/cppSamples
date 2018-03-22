//
// Created by Thomas on 3/22/2018.
//

#include "Student.h"


string Student::toString() {
    stringstream stringstream;
    stringstream << "Name : "<< this->fristName<< " "<< this->secondName << "; Alter : "<< this->age;
    return stringstream.str();
}

Student::~Student() {
}



bool Student::operator!=(const Student &rhs) const {
    return !(rhs == *this);
}

bool Student::operator==(const Student &rhs) const {
    return fristName == rhs.fristName &&
           secondName == rhs.secondName &&
           age == rhs.age;
}

const string &Student::getFristName() const {
    return fristName;
}

void Student::setFristName(const string &fristName) {
    Student::fristName = fristName;
}

const string &Student::getSecondName() const {
    return secondName;
}

void Student::setSecondName(const string &secondName) {
    Student::secondName = secondName;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}
