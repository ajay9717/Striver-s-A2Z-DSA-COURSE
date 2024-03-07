//Function(Call by value and call by reference)
#include <bits/stdc++.h>
using namespace std;

void print()              // Function with no parameter
{
    cout << "This is also inside the function" << endl;
}
void printstring(string s,int &x) // function with parameter and example of call by reference.
{
    x += 5;
    cout << "This is inside the printstring function" << endl;
    cout << x << endl;
    cout << s << endl;
}

int main()
{
    int x = 10;
    string s;
    cout << "Enter the string" << endl;
    getline(cin,s);
    print();
    printstring(s,x);
    cout << "This is inside the main function " <<  x;
}