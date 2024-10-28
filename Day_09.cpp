//Day 9 coding Statement : Write a program to find Number of digits in an integer
#include <iostream>
using namespace std;

int main()
{
    int x,count;
    cout << "Enter a Number: ";
    cin >> x;
    string str;
    str = to_string(x);
    cout << "Number Of digits :" << str.length();
}