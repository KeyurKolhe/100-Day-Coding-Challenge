//Day 11 coding Statement:  Write a program to find Fibonacci series up to n
#include <iostream>
using namespace std;

int main()
{
    int n,sum;
    int a = -1;
    int b = 1;
    cout << "Enter a Number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        sum = a + b;
        cout << sum << ",";
        a=b;
        b=sum;
    }
    
}