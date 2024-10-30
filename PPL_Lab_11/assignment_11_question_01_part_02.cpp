/*
Assignment 11
Question 1:Write a program based on Polymorphism:
b)Run-time Polymorphism.
*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "This is an animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();
    
    animal1->sound(); // Dog barks
    animal2->sound(); // Cat meows
    
    delete animal1;
    delete animal2;
    return 0;
}
