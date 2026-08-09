/* 
Q1.Write a program which number accept number from the user and check wheter it is prime or not
Input : 31
Output: Is is a prime number.

Input: 20
Output: It is not a prime number.

Author: Pooja Jagave
*/

#include <iostream>
using namespace std;

bool check_primeNumber(int num)
{
    if(num <= 1)
    return false;

    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int num;
    cout << "Enter Number:";
    cin >> num;
    cout << endl;

    if(check_primeNumber(num))
     cout << "It is prime number\n";
    else 
     cout << "it is not prime number" << std::endl;
     
    return 0;   
}