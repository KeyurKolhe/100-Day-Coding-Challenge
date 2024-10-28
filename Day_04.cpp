//Day 4 coding Statement:  Write a program to identify of the a number is positive or negative
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number : \n";
    cin >> n;
    if(n>=0)
    cout << "Number is Positive";
    else
    cout << "Number is Negative";
    return 0;
}