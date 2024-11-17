//Day 37 coding Statement : Write a Program to calculate the Frequency of characters in a string
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
        cout << i << ": " << freq[i] << '\n';
    } 
}
