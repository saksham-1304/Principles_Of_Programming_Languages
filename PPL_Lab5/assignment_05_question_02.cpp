/*
Assignment 04
Question 2: Program to reverse the digits of a given number by using function and print it
*/
#include <iostream>
using namespace std;

int reverseDigits(int n)
{
    int reversedNumber = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n = n / 10;
    }
    return reversedNumber;
}
int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int reversedNumber = reverseDigits(number);

    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}
