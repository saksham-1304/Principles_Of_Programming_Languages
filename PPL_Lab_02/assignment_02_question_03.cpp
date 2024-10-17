/*
Assignment 2
Question 3:Write a program to transform matrix to upper triangular matrix
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    int arr[n][n];
    cout << "Enter the elements of array row wise" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i > j)
            {
                arr[i][j] = 0;
            }
        }
    }
    cout << "Upper Triangular Matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}