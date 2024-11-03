//Day 24 coding Statement : Write a program to print Pyramid pattern using stars
#include <iostream>

using namespace std;

int main()
{
    int num,count=1;
    cout << "Enter a Number: ";
    cin >> num;
    for(int i = 1; i <= num; i++)
    {
        for(int j = 0; j < count; j++)
        {
            cout << "*";
        }
        count = count+2;
        cout << "\n";
    }
}
