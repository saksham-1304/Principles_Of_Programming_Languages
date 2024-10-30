/*
Assignment 11
Question 1:Write a program based on Polymorphism:
a)Compile-time Polymorphism
*/

#include <iostream>
using namespace std;

class Calculate {
public:
    // Function overloading for add method
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculate calc;
    cout << "Sum of two integers: " << calc.add(5, 10) << endl;
    cout << "Sum of two doubles: " << calc.add(5.5, 10.5) << endl;
    cout << "Sum of three integers: " << calc.add(1, 2, 3) << endl;
    return 0;
}
