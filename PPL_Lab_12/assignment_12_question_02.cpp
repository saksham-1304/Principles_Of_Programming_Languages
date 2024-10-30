/*
Assignment 12
Question 2:Write a program for an example of multiple catch statements occurring in a program
*/

#include <iostream>
using namespace std;

int main() {
    try {
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        if (num2 == 0)
            throw "Division by zero error!";
        if (num1 < 0 || num2 < 0)
            throw -1;

        cout << "Result: " << num1 / num2 << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
    catch (int errorCode) {
        cout << "Error: Negative numbers are not allowed!" << endl;
    }

    return 0;
}

