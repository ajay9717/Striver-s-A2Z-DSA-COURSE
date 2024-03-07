// It is same like set, it stores unique element but it does not store the element in the sorted order.
// In most of the cases the time complexity is Big O(1).
#include<bits/stdc++.h>
using namespace std;

void explainUnorderedSet()
{
    unordered_set<int> us;
    us.insert(1);
    us.emplace(1);
    // All the functions are same like set except the lower bound and upper bound function does not
    // work in this.It does not stores in the particular order so it has better complexity than set
    // set in most cases except some when collision happens.

}

int main()
{
    explainUnorderedSet();
}