#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n <= 1)
    return n;
    else
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int fib;
    cout << "Enter the index of which fibonacci number you want";
    cin >> fib;
    cout << fibonacci(fib);

}