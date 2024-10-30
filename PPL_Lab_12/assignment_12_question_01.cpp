/*
Assignment 12
Question 1:Write a program for an example of try and catch block. In this check whether the given array size is negative or not?
*/

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    try {
        if (size < 0)
            throw "Array size cannot be negative!";
        
        int *arr = new int[size];
        cout << "Array created successfully with size " << size << endl;
        delete[] arr;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
