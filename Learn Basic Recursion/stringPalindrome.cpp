// In this question we have to check that the given string is palindrome or not by recursion
#include <bits/stdc++.h>
using namespace std;

bool palindromeOrNot(string str, int i)
{
    if(i > str.length()/2)
    return true;
    if(str[i] != str[str.size()-i-1])
    return false;
    return palindromeOrNot(str, i+1);
}

int main()
{
    string str = "madam";
    cout << str << endl;
    int i = 0; 
    cout << palindromeOrNot(str, i);
    
    
    // for (int i = 0; i < str.length() / 2; i++)
    // {
    //     swap(str[i], str[str.length() - i - 1]);
    // }
    // for (int i = 0; i < str.length(); i++)
    // {
    //     cout << str[i] << " ";
    // }
}