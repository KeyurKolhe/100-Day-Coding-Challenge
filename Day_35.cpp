//Day 35 coding Statement : Write a Program to Count the sum of numbers in a string
#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int sum = 0;
    cout << "Enter a String : \n";
    cin.getline(str,100);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(isdigit(str[i]))
            sum = sum + (str[i] - '0');
    }
    cout << "Sum of number String is :\n" <<sum;
    return 0;
}
