// It is similar to map but it can store duplicate keys but everything in the sorted order
#include <bits/stdc++.h>
using namespace std;

void explainMultimap()
{
    multimap<int , int> mm;
    mm.insert({1,2});
    mm.insert({1,3});
    mm.insert({2,4});
    mm.insert({0,1});
    for(auto it : mm)
    {
        cout << it.first << " " << it.second;
    }

}

int main()
{
    explainMultimap();
}