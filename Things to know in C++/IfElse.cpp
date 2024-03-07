//If Else Statements
#include<bits/stdc++.h>
using namespace std;

// Write a program that takes an input age and determine the person is adult or not.

int main()
{
    int age;
    cout << "Enter the age" << endl;
    cin >> age;

    if(age >= 18)
    {
        cout << "Adult"<< endl;
    }
    else{
        cout << "Not an adult";
    }
}
