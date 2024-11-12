//Day 31 coding Statement : Write a Program to Toggle each character in a string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a String : \n";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }
    cout << "Toggled Output :" << str;
    return 0;
}
