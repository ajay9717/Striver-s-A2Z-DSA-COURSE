// In this question we have two input from the user and we have to find the GCD(Greatest common divisor) 
// or HCF(Highest common factor).
#include<bits/stdc++.h>
using namespace std;

void gcdOrHcf(int n1, int n2)
{
    int smaller = min(n1,n2);
    int gcd = 1;
    for(int i = 1; i <= smaller; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        gcd = i;
    }
    cout << "GCD of " << n1 << " and " << n2 << " is " << gcd;
    // In this approach the time complexity is Big O(min(n1,n2)). 
}

void anotherApproach(int n1,int n2)
{
    int gcd = 1;
    int mini = min(n1,n2);
    for(int i = mini; i >= 1; i--)
    {
        if(n1 % i == 0 && n2 % i == 0){
        gcd = i;
        cout << "GCD of " << n1 << " and " << n2 << " is " << gcd;
        break;
        }
    }
    // The time complexity for this case is also Big O(min(n1,n2)).
    // But in some case it is good.
}


int main()
{
    int n1,n2;
    cout << "Enter n1 and n2" << endl;
    cin >> n1 >> n2;
    anotherApproach(n1, n2);
}