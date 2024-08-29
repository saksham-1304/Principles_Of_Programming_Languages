/*
Assignemnt 05:
Write to find the power of the given base and exponent by using function pow(base,recursion)
*/

#include <iostream>
using namespace std;

int pow(int base, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int base, exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    int power = pow(base, exponent);

    // Print the result
    cout << base << "^" << exponent << " = " << power << endl;

    return 0;
}
