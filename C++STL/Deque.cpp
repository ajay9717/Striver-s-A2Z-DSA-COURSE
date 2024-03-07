// Deque is same like list and vector.
#include<bits/stdc++.h>
using namespace std;

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.emplace_front(1);
    dq.erase(dq.begin() + 2);
    dq.insert(dq.end(), 4);
    dq.pop_back();
    for(auto i : dq)
    {
        cout << i << " ";
    }
    // All other functions are same like list and vector.
}
int main()
{
    explainDeque();
}