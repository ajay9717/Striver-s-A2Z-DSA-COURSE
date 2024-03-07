// Armstrong number of all digits
#include<bits/stdc++.h>
using namespace std;

void armstrong(int n)
{
    int originalN = n;
    int n1 = n;
    int digits = 0;
    while(n > 0)
    {
        int lastdigit = n % 10;
        digits++;
        n /= 10;
    }
    cout << digits  << endl;
    int sum = 0;

    while (n1 > 0)
    {
        int lastdigit = n1 % 10;
        sum = sum + int(pow(lastdigit , digits));
        n1 /= 10;
    }
    cout << sum << endl;
    if (sum == originalN)
    cout << "Armstrong number";
    else cout << "Not armstrong number";
    
}
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    armstrong(n);
}