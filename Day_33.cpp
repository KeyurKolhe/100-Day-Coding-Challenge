//Day 33 coding Statement : Write a Program to check if String is a palindrome or not
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String : \n";
    cin >> str;
    string str1 = str;
    reverse(str1.begin(),str1.end());
    if(str == str1)
        cout << "Palindrome String";
    else
        cout << "Not Palindrome String";
        return 0;
}
