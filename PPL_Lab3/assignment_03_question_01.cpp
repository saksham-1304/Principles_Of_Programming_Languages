/*
Assignment 03:
Question 01: Write a program to count the number of vowels and consonants present in a string
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the string" << endl;
    string s;
    getline(cin, s);
    int vowels = 0;
    int consonants = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            if (s[i] =='a' || s[i] =='e' || s[i] =='i' || s[i] =='o' || s[i] =='u' || s[i] =='A' || s[i] =='E' || s[i] =='I' || s[i] =='O' || s[i] =='U')
            {
                vowels++;
            }

            else
            {
                consonants++;
            }
        }
    }

    cout << "The number of vowels in " <<"\""<< s <<"\""<<" are " << vowels << " and the number of consonants are " << consonants << endl;
}