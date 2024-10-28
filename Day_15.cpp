//Day 15 coding Statement : Write a program to identify if the number is Strong number or not
#include <iostream>
using namespace std;

int main()
{
    int num,rev,fact,sum = 0;
    cout << "Enter a Number : ";
    cin >> num;
    int num2=num;
    while(num>0)
    {
        fact = 1;
        rev = num % 10;
        for (int i = 1; i <= rev; i++)
            fact = fact * i;
        sum = sum + fact;
        num = num / 10;
    }
    if(sum == num2)
        cout << "Strong Number";
    else
        cout << "Not A Strong Number";
}