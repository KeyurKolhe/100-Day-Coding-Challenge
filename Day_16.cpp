//Day 16 coding Statement : Write a program to identify if the number is Perfect number or not
#include <iostream>
using namespace std;

int main()
{
    int num,sum=0;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        if(num % i == 0)
        sum = sum + i;
        else
        continue;
    }
    
    cout << sum;
    if(sum == num)
        cout << "Perfect Number";
    else
        cout << "Not A Perfect Number";
}