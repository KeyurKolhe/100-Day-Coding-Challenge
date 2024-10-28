//Day 7 coding Statement:  Write a program to find Number of days in a given month of a given year
#include <iostream>
using namespace std;

int main()
{
    int yr,mon;
    int arr1[7],arr2[4];
    cout << "Enter year :\n";
    cin >> yr;
    cout << "Enter Month :\n";
    cin >> mon;
    switch(mon)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout << "Number Of Days : 31";
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout << "Number Of Days : 30";
        break;
        case 2:
        if(yr % 400 == 0)
        cout << "Number Of Days : 29";
        else
        cout << "Number of Days : 28";
        break;
    }

}