/*
Assignment 04
Question 1: Program to count number of palindromic words present in any sentence from the user pointer
*/

#include <iostream>
#include <string.h>
using namespace std;
bool checkPalindrome(string &s, int start, int end)
{
    char *start_ptr=&s[start];
    char *end_ptr=&s[end];
    while (start <= end)
    {
        if (*(start_ptr) != *(end_ptr))
        {
            return false;
        }
        start_ptr++;
        end_ptr--;
    
    }
    return true;
}
int main()
{
    cout << "Enter the sentence:" << endl;
    string s;
    getline(cin, s);
    int count = 0;
    int i = 0;
    int start = 0;
    while (i <= s.size())
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            int end = i - 1;
            if (checkPalindrome(s, start, end))
            {
                count++;
            }
            start = i + 1;
        }
        i++;
    }

    cout << "The number of palindrome words in the given sentence are " << count << endl;
}