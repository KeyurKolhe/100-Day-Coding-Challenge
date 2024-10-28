//Day 1 coding Statement: Write a program to identify if the character is a vowel or consonant.
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a Character:\n";
    cin >> ch;
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    cout << "Vowel";
    else 
    {
        if(ch >= 'a' && ch <='z')
        cout << "Consonant";
        else
        cout << "Invalid Input";
    }
    return 0;
}