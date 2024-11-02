//Day 23 coding Statement : Write a program to Replace all 0’s with 1 in a given integer
#include <iostream>
using namespace std;
int main()
{
    int num1,num2 = 0,temp;
    cout << "Enter a number: ";
    cin >> num1;

    if(num1==0)
        num2=1;
    else
    {
        int place = 1;
        while(num1>0)
        {
            temp = num1 % 10;
            if(temp==0){
                temp = 1;
            }
                num2 = temp * place + num2;
                num1 = num1 / 10;
                place *= 10;
        }
    }
    cout << num2;
    return 0;
}   
