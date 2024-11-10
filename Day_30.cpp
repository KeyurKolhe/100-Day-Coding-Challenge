//Day 30 coding Statement : Write a Program to print Length of the string without using strlen() function
#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    gets(str); 

    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of the string is:" << length;

    return 0;
}
