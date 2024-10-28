//Day 5 coding Statement:  Write a program to identify if the number is even or odd
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : \n";
    cin >> n;
    if(n % 2 == 0)
    cout << "Number is Even";
    else
    cout << "Number is Odd";
}