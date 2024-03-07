// List is also a container like vector but it also provide functions to insert element in the front, as we know 
// vector also can do that which we can do with insert function but it consume more time but in list it has 
// functions like push_front and emplace_front which consume less time overall.
#include<bits/stdc++.h>
using namespace std;


void explainList()
{
    list <int> ls;
    ls.push_front(3);
    ls.push_front(4);
    ls.push_front(5);
    ls.push_front(6);
    ls.push_front(6);
    ls.push_front(7);
    ls.push_front(73);
    ls.push_front(33);
    ls.push_back(1);
    ls.emplace_back(2);
    ls.pop_back();
    ls.pop_front();
    for(auto it : ls)
    {
        cout << it << " ";
    }
    // All other function are same like vector as size begin end swap clear etc.
}

int main()
{
    explainList();
}