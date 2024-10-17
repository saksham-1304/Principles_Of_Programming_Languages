/*
Assignment 10
Question 2: Write a C++ program to implement the following class hierarchy:
Student: id, name
Exam (derived from Student): Marks of 5 subjects
Result (derived from Exam): Percentage.
Create 'n' objects of the Result class and display the mark list. 
Define appropriate functions to accept and display details
*/

#include <iostream>
using namespace std;

class Student {
protected:
    int id;
    string name;

public:
    void getStudentInfo() {
        cout << "Enter Student ID: ";
        cin >> id;
        cout << "Enter Student Name: ";
        cin >> name;
    }

    void displayStudentInfo() {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
    }
};

class Exam : public Student {
protected:
    int marks[5];

public:
    void getMarks() {
        cout << "Enter marks of 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    void displayMarks() {
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class Result : public Exam {
private:
    float percentage;

public:
    void calculatePercentage() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        percentage = (total / 5.0);
    }

    void displayResult() {
        displayStudentInfo();
        displayMarks();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Result students[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].getStudentInfo();
        students[i].getMarks();
        students[i].calculatePercentage();
    }

    cout << "\nDisplaying Results:\n";
    for (int i = 0; i < n; i++) {
        students[i].displayResult();
        cout << endl;
    }

    return 0;
}
