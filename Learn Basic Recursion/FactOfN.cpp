// Factorial of a number.
#include <bits/stdc++.h>
using namespace std;

int factOf(int n)
{
    if(n == 0)
    return 1;

    return n * factOf(n - 1);
}

int main()
{
    int n;
    cout << "Factorial of ";
    cin >> n;
    cout << factOf(n);
}