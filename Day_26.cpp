  //Day 26 coding Statement : Write a program to calculate Maximum number of handshakes
#include <iostream>
using namespace std;

int main()
{
    int num,sum=0;
    cout << "Enter a Number : ";
    cin >> num;

    for (int i = 1; i < num; i++)
        sum = sum + (num - i);
    cout << "Number a Handshakes is : " << sum;
    return 0;
}
