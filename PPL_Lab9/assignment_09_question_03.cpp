/*
Assignment 09
Question 3:Program to calculate the factorial of a number using a copy constructor
*/

#include<iostream>
using namespace std;

class Factorial 
{
    int num;
public:
    // Parameterized constructor
    Factorial(int n) 
    {
        num = n;
    }

    // Copy constructor
    Factorial(const Factorial &f) 
    {
        num = f.num;
        long long fact = 1;
        for(int i = 1; i <= num; ++i)
            fact *= i;
        cout << "Factorial of " << num << " is " << fact << endl;
    }
};

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Factorial f1(n); // Calls parameterized constructor
    Factorial f2(f1); // Calls copy constructor
    return 0;
}
