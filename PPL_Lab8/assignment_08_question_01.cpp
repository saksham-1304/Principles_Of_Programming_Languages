/*
Assignment 08
Question 01 : Program to define a class named CALCULATION with three member functions in it such as add,sub and multiply of two values
*/

#include <bits/stdc++.h>
using namespace std;
class Calculation
{
private:
    int a, b;

public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int difference(int a, int b)
    {
        return a - b;
    }
    int multiplication(int a, int b)
    {
        return a * b;
    }
};

int main()
{
    Calculation calculator;
    cout << calculator.sum(4, 5) << endl;
    cout << calculator.difference(43, 5) << endl;
    cout << calculator.multiplication(4, 5) << endl;
}