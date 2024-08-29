/*
Assignment 5
Question 1: Program to print all the perfect numbers between 1 to 1000 by using is_Perfect function
*/
#include <iostream>
using namespace std;

bool is_Perfect(int n)
{
    int sum_of_divisors = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum_of_divisors += i;
        }
    }

    return sum_of_divisors == n;
}

int main()
{
    cout << "Enter the numbers between which you want to search perfect numbers: " << endl;
    int s, e;
    cin >> s >> e;

    for (int i = s; i <= e; i++)
    {
        if (is_Perfect(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
