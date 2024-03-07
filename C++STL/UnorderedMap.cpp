// It is similar as multimap but it does not store in sorted order. It has the same difference which set and 
// multiset have between them. But it will not have duplicate keys it will have unique keys same like map.
// It works in O(1) time mostly rather than logn in map.
#include<bits/stdc++.h>
using namespace std;

void explainUnorderedmap(){
    unordered_map<int, int> um;
    um.insert({0,1});
    um.insert({2,3});
    for(auto it: um)
    {
        cout << it.first << " " << it.second;
    }
}

int main()
{
    explainUnorderedmap();
}