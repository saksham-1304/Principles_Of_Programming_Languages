/*
Assignment 10
Question 03:Write a C++ Program to display the reverse of a number using the Virtual base Class.
*/

#include <iostream>
using namespace std;

class Base {
public:
    virtual void reverseNumber(int num) = 0; 
};

class Derived : public Base {
public:
    void reverseNumber(int num) override {
        int reverse = 0;
        while (num != 0) {
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }
        cout << "Reversed Number: " << reverse << endl;
    }
};

int main() {
    Derived obj;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    obj.reverseNumber(num);

    return 0;
}
