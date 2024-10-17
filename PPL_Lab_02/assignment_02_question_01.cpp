/*Assignment 02
Question1: Write a program to find the pair of elements in an array whose sum is less than max element
*/
#include <iostream>
#include <vector>
using namespace std;
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
    int max_element = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_element)
        {
            max_element = arr[i];
        }
    }
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] < max_element)
            {
                ans.push_back({arr[i], arr[j]});
            }
        }
    }
    cout << "The maximum element is " << max_element << endl;
    cout << "Pair of elements whose sum is less than the maximum element" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << "," << ans[i][1] << "  ";
    }
}