//Day 14 coding Statement : Write a program to reverse a given number
#include <iostream>
using namespace std;

int main()
{
    string n2,n1,temp;
    cout << "Enter a Number : ";
    cin >> n1;
    for (int i = n1.length()-1; i >= 0; i--)
    {
        temp =  n1.at(i);
        n2 = n2 + temp;
    }

    /*
    while(num>0)
    {
        rev = rev*10 + num%10;
        num = num / 10;
    }
    */
    cout << "Reversed Number is :" << n2;
}