//Day 40 coding Statement : Write a Program to Replace substring in a string
#include <iostream>
using namespace std;

int main()
{
    string str,substr,replace;
    cout << "Enter a String :\n";
    getline(cin,str);
    cout << "Enter a substring to Replace :\n";
    getline(cin,substr);
    
    int num1 = str.find(substr);
    if(!num1)
    {
        cout << "Enter new String :\n";
        getline(cin,replace);
        int num2 = substr.length();
        str.replace(num1,num2,replace);
        cout << str;
    }
    else
        cout << "Substring not Found";
    return 0;
}
