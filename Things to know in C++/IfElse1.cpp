//If Else Statements.
#include<bits/stdc++.h>
using namespace std;

/*
A school has following rules for grading system
a. Below 25 = F
b. 25 - 44 = E
c. 45 - 49 = D
d. 50 - 59 = C
e. 60 - 79 = B
f. 80 - 100 = A
*/

int main()
{
    int marks;
    cout << "Enter the marks";
    cin >> marks;

    if(marks < 25)
    {
        cout << "F";
    }
    else if(marks >= 25 && marks <= 44)
    {
        cout << "E";
    }
    else if(marks >= 45 && marks <= 49)
    {
        cout << "D";
    }
    else if(marks >= 50 && marks <= 59)
    {
        cout << "C";
    }
    else if(marks >= 60 && marks <= 79)
    {
        cout << "B";
    }
    else if(marks >= 80 && marks <= 100){
        cout << "A";
    }
    else{
        cout << "Invalid marks";
    }
}