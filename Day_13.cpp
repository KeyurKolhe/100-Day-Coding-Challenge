//Day 13 coding Statement:  Write a program to find Sum of N natural numbers
#include <iostream>
using namespace std;

int main()
{
    int n,sum;
    cout << "Enter a Number: ";
    cin >> n;
    sum=(n*(n+1))/2;
    cout << "Sum of first " << n << "is" << sum;
}