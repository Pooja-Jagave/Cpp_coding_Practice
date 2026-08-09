/*
 Q2. Write a program to count number of digits in given number.
 Input : 4365
 Output: Number of digits are 4.

 Input: 125
 Output: Number of digits are 3.

 Author: Pooja Jagave
*/

#include <iostream>
using namespace std;

int count_number_of_digit(int num)
{
    int count = 0;
    while(num)
    {
        count++;
        num = num / 10;
    }

    return count;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << endl;
    cout << "Number of Digit:" << count_number_of_digit(num) << endl;

    return 0;
}

/*
   I repeatedly divide the number by 10. Every division removes the last digit, 
   so I increment the count for each division. When the number becomes zero, the count represents the total number of digits.
*/