//
// Created by Thomas on 3/22/2018.
//

#include "UserInface.h";

void UserInterface::printAllStudents() {
    for(auto student : this->studentList){
        cout << student.toString() << endl;
    }
}

void UserInterface::addNewStudent() {
    string firstName;
    string secondName;
    cout << "Vorname : ";
    cin >> firstName;
    cout << "\n Nachname : ";
    cin >> secondName;
    studentList.push_back(Student(firstName,secondName,readNumber("Alter : ")));
}

void UserInterface::calculateAverage() {
    double sum = 0;
    for(auto student : this->studentList){
        sum+=student.getAge();
    }
    cout << "Durchschnittsalter :  "<< sum / studentList.size() << endl;
}

int UserInterface::readNumber(string inputText) {
    string userinput;
    cout << inputText;
    try {
        cin >> userinput;
        return stoi(userinput);
    }catch (invalid_argument ex){
        cout << "Keine Zahl eingegeben!" << endl;
        return this->readNumber(inputText);
    }
}

void UserInterface::printMenu() {
    cout << "1 : Alle Schueler anzeigen" << endl;
    cout << "2 : Neuen Schueler eintragen" << endl;
    cout << "3 : Durchschnittsalter berechnen" << endl;
    //cout << "[4] Schueler loeschen!" << endl;
    cout << "0 : Ende!" << endl;
}

void UserInterface::start() {
    int input=-1;
    while(input != 0){
        printMenu();
        input=readNumber("Geben sie einen Menüpunkt ein : ");
        switch (input){
            case 1 :
                printAllStudents();
                break;
            case 2:
                addNewStudent();
                break;
            case 3 :
                calculateAverage();
                break;
        }
    }
}
