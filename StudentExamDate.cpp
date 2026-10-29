
#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    int rollNo;
    string name;

public:
    void getStudentDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Student Name: ";
        cin >> ws;
        getline(cin, name);
    }

    void displayStudentDetails() {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nStudent Name: " << name;
    }
};

// Derived class from Student
class Exam : public Student {
protected:
    int marks[6];

public:
    void getMarks() {
        cout << "\nEnter marks for six subjects:\n";
        for (int i = 0; i < 6; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        cout << "\nMarks obtained:\n";
        for (int i = 0; i < 6; i++) {
            cout << "Subject " << i + 1
                 << ": " << marks[i] << endl;
        }
    }
};

// Derived class from Exam
class Result : public Exam {
private:
    int totalMarks = 0;
    float percentage;

public:
    void calculateResult() {
        totalMarks = 0;

        for (int i = 0; i < 6; i++) {
            totalMarks += marks[i];
        }

        percentage = totalMarks / 6.0f;
    }

    void displayResult() {
        displayStudentDetails();
        displayMarks();

        cout << "\nTotal Marks: " << totalMarks
             << " / 600";
        cout << "\nPercentage: " << percentage << "%\n";
    }
};

int main() {
    Result studentResult;

    studentResult.getStudentDetails();
    studentResult.getMarks();
    studentResult.calculateResult();

    cout << "\n----- STUDENT RESULT -----\n";
    studentResult.displayResult();

    return 0;
}
