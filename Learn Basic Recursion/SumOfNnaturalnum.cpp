// Sum of first n natural numbers.
#include<bits/stdc++.h>
using namespace std;

int sum = 0;

// Parameterised way
void sumofn(int i, int sum)
{
   if(i < 1){
   cout << sum;
   return ;}
   sumofn(i-1,sum+i);
}

//Functional way
int SumOfN(int n)
{
    if(n == 0)
    return 0;

    return n + SumOfN(n - 1);
}

int main()
{
    int n;
    cout << "Enter n";
    cin >> n;

    cout << SumOfN(n);

}