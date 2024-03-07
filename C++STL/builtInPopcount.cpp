//This function count the no. of set bits in a binary no. or we can say the no. of one' s in that binary no.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 7;
    int count  = __builtin_popcount(x);

    long long int y = 23242424928472;
    int cnt = __builtin_popcountll(y);
    cout << count << endl << cnt <<  endl;
}