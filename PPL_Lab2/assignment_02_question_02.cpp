/*Assignment 02
Question 2: Write a program to find frequency of elements
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mapp;
    cout << "Enter the number of elements" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements one by one" << endl;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (mapp[arr[i]] == 0)
        {
            ans.push_back(arr[i]);
        }
        mapp[arr[i]]++;
    }
    cout << "The frequency of given elements is:" << endl;
    sort(ans.begin(), ans.end());
    /*for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "," << mapp[arr[i]] << " ";
    }*/

    for (auto it : mapp)
    {
        cout << it.first << "," << it.second << " ";
    }
}
