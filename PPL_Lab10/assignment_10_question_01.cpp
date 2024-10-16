/*
Assignment 10
Question 1: Write a program in c++ by creating an 'Employee' class having the following functions and print the final salary. 
'AddInfo()' which takes the salary, number of hours of work per day of employee as parameters. 
'AddSal()' which adds $10 to the salary of the employee if it is less than $500. 
'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
*/

#include <iostream>
using namespace std;

class Employee {
private:
    int salary;
    int hours_per_day;

public:
    void AddInfo(int sal, int hours) {
        salary = sal;
        hours_per_day = hours;
    }

    void AddSal() {
        if (salary < 500) {
            salary += 10;
        }
    }

    void AddWork() {
        if (hours_per_day > 6) {
            salary += 5;
        }
    }

    void printSalary() {
        cout << "Final Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;

    emp.AddInfo(450, 7);  
    emp.AddSal();        
    emp.AddWork();        
    emp.printSalary();    

    return 0;
}
