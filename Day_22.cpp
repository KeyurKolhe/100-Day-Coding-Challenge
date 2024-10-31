//Day 22 coding Statement : Write a program to express a number as a sum of two prime numbers
#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n);
int main()
{
    int num;
    bool flag=false;
    cout << "Enter a Number : ";
    cin >> num;

    for (int i = 2 ; i <= num/2; i++)
    {
        int j =num-i;
        if(prime(i) && prime(j))
        {
            cout << "Prime Numbers whose sum is " << num << " are: " << i << " and " << (j) <<endl;
            flag = true;
        }
    }
    if(flag!=true)
    cout << "Cannot Split";

    return 0;
}


bool prime(int n)
{

    if (n <= 1) 
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

