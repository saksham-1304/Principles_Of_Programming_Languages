/*
Assignment 1:
Question 2: Write a program to find duplicate elements from array and then remove them
*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
unordered_map<int, int> mapp;
int main()
{
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        mapp[arr[i]] = 0;
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (mapp[arr[i]] == 0)
        {
            ans.push_back(arr[i]);
            mapp[arr[i]]++;
        }
    }
    cout << " Elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << " Elements of array after removing duplicates" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}