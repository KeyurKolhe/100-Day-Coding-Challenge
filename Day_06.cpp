//Day 6 coding Statement:  Write a program to find the Quadrants in which coordinates lie
#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout << "Enter x and y Co-ordinates :\n";
    cin >> x;
    cin >> y;
    if(x == 0 && y == 0)
    cout << "Point is On Origin";
    else
    {
        if(x >= 0)
        {
            if(y >= 0)
            cout << "Point lies in First Quadrant";
            else
            cout << "Point lies in Forth Quadrant";
        }
        else
        {
            if(y >= 0)
            cout << "Point lies in Second Quadrant";
            else
            cout << "Point lies in Third Quadrant";
        }
    }
}