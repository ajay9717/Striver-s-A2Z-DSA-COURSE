// Switch Statement.
#include<iostream>
using namespace std;

/*
Take input num from the user and print the day.
For 1 print Sunday and for 2 print monday and so on for 7 print Saturday accordingly.
*/

int main()
{
    int num;
    cout << "Enter the number for the day" << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;
    default: 
        cout << "Invalid input";
        break;
    }
}