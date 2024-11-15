//Day 34 coding Statement : Write a Program to Remove brackets from an algebraic expression
#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a Expression : \n";
    cin.getline(str,100);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(!(str[i] == '(' || str[i] == ')'))
            str[count++]=str[i];
    }
    str[count] = '\0';
    cout << "Bracket removed expression is :\n" << str;
    return(0);
}
