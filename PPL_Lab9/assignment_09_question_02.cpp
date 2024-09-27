/*
Assignment 09
Question 2:Program to check whether a number is prime using a parameterized constructor
*/

#include<iostream>
using namespace std;

class PrimeCheck 
{
    int num;
public:
    // Parameterized constructor
    PrimeCheck(int n) 
    {
        num = n;
        bool isPrime = true;
        
        if (num <= 1) isPrime = false;
        else 
        {
            for (int i = 2; i * i <= num; i++) 
            {
                if (num % i == 0) 
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << num << " is a prime number." << endl;
        else
            cout << num << " is not a prime number." << endl;
    }
};

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    PrimeCheck pc(n); // Calls parameterized constructor
    return 0;
}
