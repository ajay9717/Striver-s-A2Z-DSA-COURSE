// This function is used to find the all permutations of a string.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "231";
    sort(s.begin(),s.end());
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));
}