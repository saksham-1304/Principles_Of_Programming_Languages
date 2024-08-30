/*Assignment 06
Question 2:Increasing characters of the given string and printing the resultant string by using function
*/

#include <bits/stdc++.h>
using namespace std;
string answer(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            s[i] = 'A';
        }
        else if (s[i] == 'z')
        {
            s[i] = 'a';
        }
        else if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            s[i] = s[i] + 1;
        }
    }
    return s;
}
int main()
{
    cout << "Enter the string: ";
    string s;
    cin >> s;
    cout << answer(s);
}