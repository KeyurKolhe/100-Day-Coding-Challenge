//Day 2 coding Statement : Write a program to identify if the character is an alphabet or not.
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a Character:\n";
    cin >> ch;
    ch = tolower(ch);
    if(ch >= 'a' && ch <= 'z')
    cout << "Is A Alphabet";
    else
    cout << "Not A Alphabet";
    return 0;
}