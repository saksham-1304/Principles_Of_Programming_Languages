/*
Assignemnt 6
Question 1: Finding Square Root of a variable by calling function by value and by reference using reference parameter
*/

#include <bits/stdc++.h>
using namespace std;
double squareRootByValue(double n)
{
    if (n < 0)
    {
        cout << "Negative Input.Square Root is Not Defined " << endl;
        return -1;
    }
    double start = 0;
    double end = n;
    double precision = 0.000001;
    double mid;
    while ((end - start) > precision)
    {
        mid = (end + start) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if ((mid * mid) < n)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }
    return mid;
}

void squareRootByRefrence(double &n, double &result)
{
    if (n < 0)
    {
        cout << "Negative Input.Square Root is Not Defined " << endl;
        result = -1;
        return;
    }
    double start = 0;
    double end = n;
    double precision = 0.000001;
    double mid;
    while ((end - start) > precision)
    {
        mid = (end + start) / 2;
        if (mid * mid == n)
        {
            result = mid;
            return;
        }
        else if ((mid * mid) < n)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }
    result = mid;
    return;
}
int main()
{
    double num;
    cout << "Enter the number: ";
    cin >> num;
    double squareRootResult = 0;
    squareRootByRefrence(num, squareRootResult);
    if (squareRootResult != -1)
    {
        cout << "The Square Root Of " << num << " is " << squareRootByValue(num) << endl;
        cout << "The Square Root Of " << num << " is " << squareRootResult << endl;
    }
}