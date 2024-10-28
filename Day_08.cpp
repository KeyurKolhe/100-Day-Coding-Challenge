//Day 8 coding Statement:  Write a program to find roots of a quadratic equation
#include <iostream>
#include <cmath>      
using namespace std;

int main()
{
    int a,b,c;
    double dis;
    double r1,r2,img;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    dis = b*b - 4*a*c;
    
    if(dis==0)
    {
        cout << "Roots are Real and Equal\n";
        r1 = - b / (2*a);
        cout << "Root = " << r1;
    }
    else if(dis > 0)
    {
        cout << "Roots are Real and Different\n";
        r1 = (-b + sqrt(4*a*c)) / 2*a;
        r2 = (-b - sqrt(4*a*c)) / 2*a;
        cout << "Roots Are :\n" << r1 << "\n" << r2;
    }
    else
    {
        cout << "Roots are Imaginary and Different\n";
        r1 = -b / (2*a);
        img = (-b + sqrt(4*a*c)) / 2*a;
        cout << "Roots Are:\n" << r1 << "+" << img << "\n" << r1 << "-" << img;
    }
}