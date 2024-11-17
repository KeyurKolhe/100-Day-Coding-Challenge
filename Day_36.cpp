//Day 36 coding Statement : Write a Program to Capitalize the first and last letter of each word of a string
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String : \n";
    getline(cin,str);
    str[0] = toupper(str[0]);
    int n = str.length();
   str[n-1] = toupper(str[n-1]);
     
    for (int i = 0; i < n; i++)
    {
        if(str[i-1] == ' ')
            str[i] = toupper(str[i]);
        if(str[i+1] == ' ')
            str[i] = toupper(str[i]);
    }
    
    cout << "String is :\n" << str;
    return 0;
}
