    //Day 20 coding Statement : Write a program to identify if the number is Prime number or not
    #include <iostream>
    #include <cmath>
    using namespace std;
    int main()
    {
        int num;
        bool flag=true;
        cout << "Enter a number: ";
        cin >> num;
        if (num < 2) 
        {
            cout << "Not a Prime Number" << endl;
            return 0;
        }

        for (int i = 2; i <= sqrt(num); i++)
        {
            if(num % i == 0)
            flag = false;
            break;
        }

        if(flag )
        cout << "Prime Number";
        else
        cout << "Not a Prime Number";
        return 0;
    }
