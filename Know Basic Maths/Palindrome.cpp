// In this question we have to check the given no. is palindrome or not. palindronme numbers are those numbers 
// ,when we reverse them they are same as the original no. ex- 1331, 121 etc.
#include<bits/stdc++.h>
using namespace std;

void palindrome(int n)
{
    int original_no = n;
    int lastDigit = 0, revNo = 0;
    for(int i = 0; n > 0; i++)
    {
        lastDigit = n % 10;
        revNo = (revNo * 10) + lastDigit;
        n = n/10;
    }
    if(original_no == revNo)
    cout << "Given number is palindrome number";
    else 
    cout << "Given number is not a palindrome number";
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    palindrome(n);
}