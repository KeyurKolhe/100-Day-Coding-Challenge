//Day 39 coding Statement : Write a Program to check if two strings are Anagram or not
#include <iostream>
#include <algorithm>
using namespace std;

bool anagram(string s1,string s2)
{
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1 == s2;
}

int main()
{
    string str;
    string str2;
    cout << "Enter 1st String :\n";
    cin >> str;
    cout << "Enter 2nd String :\n";
    cin >> str2;
    cout << (anagram(str,str2) ? "The Above two strings are Anagram" : "The Above two strings are not Anagram");
    return 0;
}
