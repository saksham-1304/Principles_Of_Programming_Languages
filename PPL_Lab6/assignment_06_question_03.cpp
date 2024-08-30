/*
Assignment 06
Question 3: Calculating simple interest by passing principle ,rate,time values into a function S_Interest which contain an r values as default 0.075 and printing simple intrest with default value and with given value
*/

#include <bits/stdc++.h>
using namespace std;
double S_Intrest(double principle, double time, double rate = 0.075)
{
    double ans = (principle * rate * time) / 100;
    return ans;
}
int main()
{
    cout << "Enter principle: ";
    double principle;
    cin >> principle;
    cout << "Enter time: ";
    double time;
    cin >> time;
    cout << "Do you wish to use default intrest rate ? Enter 0 for false and 1 for true " << endl;
    bool input;
    cin >> input;
    if (input)
    {
        cout << "The Simple Intrest is " << S_Intrest(principle, time) << endl;
        return 0;
    }
    cout << "Enter rate: ";
    double rate;
    cin >> rate;
    cout << "The Simple Intrest is " << S_Intrest(principle, time, rate) << endl;
    return 0;
}
