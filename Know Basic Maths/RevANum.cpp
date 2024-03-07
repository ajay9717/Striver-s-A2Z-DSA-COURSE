// In this question we have to reverse the given number.
#include<bits/stdc++.h>
using namespace std;

long long int reverseNumber(long long int n)
{
    int lastDigit = 0, revNo = 0;
    for(int i = 0; n > 0; i++)
    {
        lastDigit = n % 10;
        revNo = (revNo * 10) + lastDigit;
        n = n/10;
    }
    return revNo;
}
int main()
{
    long long int n;
    cout << "Enter the number";
    cin >> n;
    int reversedNo = reverseNumber(n);
    cout << "After reversing" << reversedNo;
}