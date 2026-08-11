/*
Q3. Write a function that reverses a string..
Input: POOJA
Output: AJOOP

Input: COOL
Output: LOOC.

Author: pooja jagave
*/

#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str)
{
    int n = str.length();
    for(int i = n - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    cout << endl;
}

int main()
{
    string str = "POOJA";

    reverseString(str);

    return 0;
}