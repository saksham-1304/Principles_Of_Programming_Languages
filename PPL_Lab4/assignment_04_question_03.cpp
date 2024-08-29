/*Assignment 04
Question 03: Program to reverse the characters in each word of a string
*/

#include <bits/stdc++.h>
using namespace std;
void reverseString(string &s, int start, int end)
{
    while (start <= end)
    {
        swap(s[start++], s[end--]);
    }
}
int main()
{
    cout << "Enter the sentence:" << endl;
    string s;
    getline(cin, s);
    cout << "The orignal sentence is: " << s << endl;
    int count = 0;
    int i = 0;
    int start = 0;
    while (i <= s.size())
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            int end = i - 1;
            reverseString(s, start, end);
            start = i + 1;
        }
        i++;
    }

    cout << "The reveresed string is " << s << endl;
}