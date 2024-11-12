//Day 32 coding Statement : Write a Program to Remove vowels from a string
#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a String : \n";
    cin.getline(str,100);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
            str[count++]=str[i];
    }
    str[count] = '\0';
    cout << "Vowel removed String is :\n" <<str;
    return 0;
}
