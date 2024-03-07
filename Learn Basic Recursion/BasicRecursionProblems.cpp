// Basic Recursion problems.
// 1. Print name five times.
// 2. Print linearly from 1 to N.
// 3. Print from N to 1.
// 4. Print linerarly from 1 to N (By backtrack)
// 5. Print linerarly from N to 1 (By backtrack)
#include<bits/stdc++.h>
using namespace std;

// 1. Print Name five times.
int cnt = 1;
void printName()
{
    if(cnt == 6)
    return;
    cout << "Ajay kumar" << endl;
    cnt++;
    printName();
}

// 2. Print linearly from 1 to N.
void printFrom1toN(int i, int n)
{
    if(i > n)
    return;
    cout << i << endl;
    printFrom1toN(i+1, n);
}

// 3. Print from N to 1.
void printFromNto1(int n)
{
    if(n < 1)
    return;
    cout << n << endl;
    printFromNto1(n-1);
}

// 4. Print from 1 to N by backtracking.
void print1tonbybacktracking(int i, int n)
{
    if(i < 1)
    return ;
    print1tonbybacktracking(i-1, n);
    cout << i << endl;
}

// 5. Print from N to 1 by backtracking.
void printnto1bybacktracking(int i, int n)
{
    if(i > n)
    return;
    printnto1bybacktracking(i+1, n);
    cout << i << endl;
}
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    printnto1bybacktracking(1,n);
}