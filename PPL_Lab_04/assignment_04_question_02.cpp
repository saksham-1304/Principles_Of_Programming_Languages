/*Assignment 04
Question 02:Write a program to concatenate two strings such that each word of concatenated string should be arranged in ascending order by its word length
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    string ans;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> p;
    if (s.size() >= p.size())
    {
        p.push_back(' ');
        ans = p + s;
    }
    else
    {
        s.push_back(' ');
        ans = s + p;
    }
    cout << ans << endl;
    return 0;
}