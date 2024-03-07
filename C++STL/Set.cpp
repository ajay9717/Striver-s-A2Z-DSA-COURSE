// It is also a container which stores element in the sorted manner and every element is unique. In set every 
// thing happens in logn time complexity.
#include <bits/stdc++.h>
using namespace std;

void explainSet()
{
    set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.insert(4);
    s.erase(4);
    auto it =  s.find(1);
    s.erase(5);
    int x = s.count(1);
    cout << x << endl;
    auto erase(it);
    auto a = s.find(2);
    auto b = s.find(3);
    s.erase(a,b);

    auto it = s.lower_bound(2);
    auto it = s.upper_bound(3);

}

int main()
{
    explainSet();
}