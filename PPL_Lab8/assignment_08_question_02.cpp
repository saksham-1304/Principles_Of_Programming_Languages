/*
Assignment 8
Question 2: Program to arrange string in chronological order using class and object
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class StringSorter
{
private:
    string str;

public:
    void getInput()
    {
        cout << "Enter the string: ";
        cin >> str;
    }

    void sortString()
    {
        sort(str.begin(), str.end());
    }

    void displayString()
    {
        cout << "String in chronological order: " << str << endl;
    }
};

int main()
{
    StringSorter sorter;

    sorter.getInput();
    sorter.sortString();
    sorter.displayString();

    return 0;
}
