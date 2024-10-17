/*
Assignment 09
Question 1:Program to check whether a number is even or odd using a default constructor
*/

#include<iostream>
using namespace std;

class EvenOdd 
{
    int num;
public:
    // Default constructor
    EvenOdd() 
    {
        cout << "Enter a number: ";
        cin >> num;
        if(num % 2 == 0)
            cout << num << " is even." << endl;
        else
            cout << num << " is odd." << endl;
    }
};

int main() 
{
    EvenOdd eo; 
    return 0;
}

