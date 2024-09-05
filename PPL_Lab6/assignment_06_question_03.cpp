/*
Assignment 06
Question 3: Calculating simple interest by passing principle ,rate,time values into a function S_Interest which contain an r values as default 0.075 and printing simple interest with default value and with given value
*/

#include <bits/stdc++.h>
using namespace std;
double S_Interest(double principle, double time, double rate = 0.075)
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
    cout << "Do you wish to use default interest rate ? Enter 0 for false and 1 for true " << endl;
    bool input;
    cin >> input;
    if (input)
    {
        cout << "The Simple Interest is " << S_Interest(principle, time) << endl;
        return 0;
    }
    cout << "Enter rate: ";
    double rate;
    cin >> rate;
    cout << "The Simple Interest is " << S_Interest(principle, time, rate) << endl;
    return 0;
}
