//Day 28 coding Statement : Write a Program to reverse a string.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String : \n";
    getline(cin, str);
    reverse(str.begin(),str.end());
    cout << "Reversed String is :\n" << str;
    return 0;
}
