// In this question a number is given by the user and we have to print the no.of digits in that number.
// The time complexity of this problem is log10(n). because we are dividing the n by 10 in the loop again and again.
#include<bits/stdc++.h>
using namespace std;

int numOfDigits(int n)
{
    int noOfDigit = 0;
    int lastDigit = 0;
    for(int i = 0; n > 0; i++)
    {
        lastDigit = n%10;
        n = n/10;
        noOfDigit++;
    }
    return noOfDigit;
    
}

int anotherWay(int n)
{
    int count = log10(n) + 1;
    return count;
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    
    int ans = anotherWay(n);
    cout << ans << endl;
}