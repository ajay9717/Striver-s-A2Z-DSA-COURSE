#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string";
    cin >> s;

    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] += 1;
    }
    int query;
    cout << "Enter the number of queries";
    cin >> query;

    while(query--)
    {
        char c;
        cout << "Enter the character which you to find frequency of" << endl;
        cin >> c;

        cout << hash[c - 'a'] << endl;
    }
}