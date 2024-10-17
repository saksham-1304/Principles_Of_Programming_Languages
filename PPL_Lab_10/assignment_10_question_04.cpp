/*
Assignment 10
Question 4:Write a C++ program to calculate the value of the following expression using operator overloading.
Obj1=obj1+obj2*obj3-obj4
*/

#include <iostream>
using namespace std;

class Obj {
    int value;

public:
    Obj(int v=0){
        value=v;
    }

    // Overload the addition operator
    Obj operator+(const Obj& obj) {
        return Obj(value + obj.value);
    }

    // Overload the subtraction operator
    Obj operator-(const Obj& obj) {
        return Obj(value - obj.value);
    }

    // Overload the multiplication operator
    Obj operator*(const Obj& obj) {
        return Obj(value * obj.value);
    }

    // Function to print the value
    void print() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Obj obj1(10), obj2(3), obj3(4), obj4(2);
    Obj result;

    result = obj1 + obj2 * obj3 - obj4;
    result.print(); // Output the result value

    return 0;
}
