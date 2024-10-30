    //Day 21 coding Statement : Write a program to identify if the number is Palindrome or not
    #include <iostream>
    #include <algorithm>
    using namespace std;
    int main()
    {
        string str,str1;
        cout << "Enter a number: ";
        cin >> str;
        str1 = str;
        reverse(str1.begin(), str1.end());  
        if(str1 == str)
        cout << "Palindrome Number";
        else
        cout << "Not a Palindrome Number";
    }
