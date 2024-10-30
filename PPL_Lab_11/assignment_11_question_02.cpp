/*
Assignment 11
Question 2:Write a program by using Virtual Destructor.
*/

#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor" << endl;
    }
    virtual ~Base() {  // Virtual destructor
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor" << endl;
    }
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    Base *ptr = new Derived();
    delete ptr;  // Calls both Base and Derived destructors
    return 0;
}
