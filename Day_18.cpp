//Day 18 coding Statement : Write a program to Add two fractions
#include <iostream>
using namespace std;

int main()
{
    int div,x1,x2,y1,y2,x3,y3=0;
    cout << "Enter a numerator and denominator:\n";
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1==0 || x2==0)
    cout << "Denominator can't be zero";

    else
    {
         x3 = (x1*y2) + (x2*y1);
         y3 = (y1*y2);
         if(x3 > y3)
         div = x3;
         else
         div = y3;

         for (int i = div; i > 0; i--)
         if(x3%i==0 && y3%i==0)
         {
            x3=x3/i;
            y3=y3/i;
         }
         
    }
    cout << "Answer :" << x3 << "/" << y3;
}