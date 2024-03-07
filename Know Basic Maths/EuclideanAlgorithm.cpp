// Euclidean algorithm is used to find the GCD of two numbers.
// Suppose we have two numbers n1 and n2.
// Euclidean algorithm will be = gcd(n1, n2) = gcd(n1 - n2, n2) where n1 > n2.
// And we repeat this process until one of them(n1 and n2) becomes zero
// and when one of them becomes zero the other one will be the gcd of n1 and n2.
// for example gcd(20, 12) = gcd(20-12, 12) = gcd(12, 8) = gcd(12 - 8, 8) = gcd(8, 4) = gcd(8 - 4, 4)
// = gcd(4, 4) = gcd(4 - 4, 4) = gcd(0, 4) and now one of them is 0 so the other will be gcd of 20 and 12
// which is 4.
// But it can cause more time complexity in some cases, so we can improvise it like
// gcd(n1, n2) = gcd(n1 % n2, n2) where n1 > n2.
// For example gcd(20, 12) = gcd(20 % 12, 12) = gcd(12, 8) = gcd(12 % 8, 8) = gcd(8, 4) = gcd(8 % 4, 4) = gcd(0, 4)
// Now one of them is 0 now so other one is the gcd of 20 and 12.
#include<bits/stdc++.h>
using namespace std;

int euclidean(int a, int b)
{
    while(a > 0 && b > 0)
    {
        if(a > b)
        a = a % b;
        else if(b > a)
        {
            b = b % a;
        }
    }
    if(a == 0)
    return b;
    else if(b == 0)
    return a;
    // Time complexity of this is Big O(logphi(min(a,b)));
}

int main()
{
    int a, b;
    cout << "Enter a and b";
    cin >> a >> b;
    int gcd = euclidean(a, b);
    cout << "GCD of "  << a  << " and "  << b  <<" is " << gcd ; 
}