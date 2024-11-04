//Day 25 coding Statement : Write a program to find Area of a circle
#include <iostream>
using namespace std;

int main()
{
    const double pi = 3.14; 
    double r,area = 0;
    cout << "Enter a Radius of the circle: ";
    cin >> r;
    area = pi * r * r;
    cout << "Area Of Circle is : " << area;
    return 0;
}
