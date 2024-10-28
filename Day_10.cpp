//Day 10 coding Statement:  Write a program to find Factorial of a number
#include <iostream>
using namespace std;

int main()
{
    int n,fact;
    fact = 1;
    cout << "Enter a Number :";
    cin >> n;
    for(int i=1;i<=n;i++)
    fact = fact*i;
    cout << "Factorial of Number is :" << fact;
}