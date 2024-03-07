// In this question we have to check that the given number is prime or not. Lets do it with two approaches
// The first one is brute force approach and another one is a bit optimal approach.
#include<bits/stdc++.h>
using namespace std;

void primeOrNot(int n)
{
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        count++;
    }
    if(count == 2)
    cout << "Prime number";
    else
    cout << "Not a prime number";
    // Time complexity for this approach is Big O(n).
}


void anotherApproach(int n)
{
    int cnt = 0;
    for(int i = 1; i*i <= n; i++)
    {
        if(n % i == 0){
        cnt++;
        if((n/i) != i)
        cnt++;
        }
    }
    if(cnt == 2)
    cout << "Prime number";
    else
    cout << "Not a Prime number";
    // Time complexity for this approach is Big O(sqrt(n)).
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    anotherApproach(n);
}