/*
Assignment 1:
Question 1: Write a program to reverse the elements of array
*/

#include <iostream>
using namespace std;
void reverseArray(int *arr, int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s++], arr[e--]);
    }
}
int main()
{
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements before reversing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    reverseArray(arr, n);
    cout << "Elements after reversing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}