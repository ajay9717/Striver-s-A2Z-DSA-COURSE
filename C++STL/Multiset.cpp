// Multiset is also same like set but it can store multiple occurence of a data means the data is not unique,
// but the data is in sorted form.
#include<bits/stdc++.h>
using namespace std;

void explainMultiset()
{
    multiset<int>m;
    m.insert(1);
    m.emplace(1);
    m.emplace(2);
    m.erase(2); // This will erase all occurence of 1 in the multiset.
    int cnt = m.count(2); // It will count the occurence of 1 in the multiset.
    cout << cnt ;
    m.erase(m.find(2));
    m.erase(m.find(1), m.find(1));
    // Rest all functions are same as set.
}

int main()
{
    explainMultiset();
}