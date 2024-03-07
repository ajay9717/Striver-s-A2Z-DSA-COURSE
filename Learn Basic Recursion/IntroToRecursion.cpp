// Recursion :- When a function calls itself until the specified condition is met.
#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void printcount()
{
    if(cnt == 11)
    return;
    cout << cnt << endl;
    cnt++;
    printcount();
}

int main()
{  
    printcount();
}