//Day 20 coding Statement : Write a program to identify if the number is Prime number or not
#include <iostream>
using namespace std;
int main()
{
    int num,count = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        count++;
        else
        continue;
    }

    if(count == 2)
    cout << "Prime Number";
    else
    cout << "Not a Prime Number";
}
