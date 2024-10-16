/*
Assignment 10
Question 4:Write a C++ program to calculate the value of the following expression using operator overloading.
Obj1obj1+ obj2 obj3obj4*/
#include <iostream>
using namespace std;

class Obj {
private:
    int value;

public:
    Obj(int val = 0) : value(val) {}

    Obj operator+(const Obj &other) {
        return Obj(value + other.value);
    }

    Obj operator-(const Obj &other) {
        return Obj(value - other.value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Obj obj1(10), obj2(20), obj3(30), obj4(40);

    Obj result = obj1 + obj2 * obj3 - obj4; 
    result.display();

    return 0;
}
