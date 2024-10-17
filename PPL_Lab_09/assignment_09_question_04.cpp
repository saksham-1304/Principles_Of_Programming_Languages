/*
Assignment 09
Question 4:Program to check whether a number is a Sunny number using a constructor and destructor
*/

#include<iostream>
#include<cmath>
using namespace std;

class SunnyNumber 
{
    int num;
public:
    // Constructor
    SunnyNumber(int n) 
    {
        num = n;
        if (isSunny())
            cout << num << " is a Sunny number." << endl;
        else
            cout << num << " is not a Sunny number." << endl;
    }

    // Destructor
    ~SunnyNumber() 
    {
        cout << "Destructor is called for " << num << endl;
    }

    // Function to check if the number is a Sunny number
    bool isSunny() 
    {
        return (sqrt(num + 1) == int(sqrt(num + 1)));
    }
};

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    SunnyNumber sn(n); // Calls constructor
    return 0;
}
