//Day 38 coding Statement : Write a Program to print Non-repeating characters in a string
#include <iostream>
#include <set>
using namespace std;

int main()
{
    string str;
    set<char> ch;
    int freq[256] = {};
    cout << "Enter a String : \n";
    getline(cin,str);

    for (char c : str){
        ch.insert(c);
        freq[c]++;
    }

    for (auto i : ch) {
        if(freq[i] == 1)
        cout << "'"<< i << "'" << "\t";
    } 
}
