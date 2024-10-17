/*Assignment 8
Question 3: Program to define a class ARRAY with member function get_array and sort_array
*/

#include <bits/stdc++.h>
using namespace std;
class ARRAY
{
private:
    int arr[100];
    int size;

public:
    void get_array()
    {
        cout << "Enter the number of elements in the array: ";
        cin >> size;
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    void sort_array()
    {
        sort(arr, arr + size);
        cout << "Array after sorting:\n";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    ARRAY array_obj;
    array_obj.get_array();
    array_obj.sort_array();
    return 0;
}
