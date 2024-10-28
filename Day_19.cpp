//Day 19 coding Statement : Write a program to identify if the number is Armstrong number or not
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string str;
    int num,nums,sum=0;
    cout << "Enter a number: ";
    cin >> num;
    nums=num;
    str = to_string(num);
    
    while(num!=0)
    {
        sum = sum + pow(num%10,str.length());
        num = num/10;
    }

    if(nums == sum)
    cout << "Is Armstrong Number";
    else
    cout << "Not a Armstrong Number";
}