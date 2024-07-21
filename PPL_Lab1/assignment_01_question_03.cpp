/*
Assignment 1:
Question 3:Write a program to combine two arrays and then sort the combined array
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the size of 1st array" << endl;
    int n;
    cin >> n;
    int arr1[n];
    cout << "Enter the elements 1st array one by one" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the size of 2st array" << endl;
    int m;
    cin >> m;
    int arr2[m];
    cout << "Enter the elements 2st array one by one" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int ans[n + m];
    for (int i = 0; i < n; i++)
    {
        ans[i] = arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        ans[n + i] = arr2[i];
    }

    // Sorting ans array
    for (int i = 0; i < n + m; i++)
    {
        for (int j = 1; j < n + m - i; j++)
        {
            if (ans[j - 1] > ans[j])
            {
                swap(ans[j - 1], ans[j]);
            }
        }
    }
    cout << " Elements of merged array in sorted form  " << endl;
    for (int i = 0; i < m + n; i++)
    {
        cout << ans[i] << " ";
    }
}