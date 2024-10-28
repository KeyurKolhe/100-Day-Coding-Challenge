//Day 12 coding Statement:  Write a program to find Sum of digits of a number
#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum;
    cout << "Enter a Number: ";
    cin >> n;
    string str = to_string(n);

    while (n > 0)
    {
        sum = sum + (n%10);
        n = n/10;
    }
    cout << "Sum of Digits Of number :" << sum;
}