// Queue is similar to stack but it follow the FIFO principle. It also has same functions as push and pop with same
// time complexity big O(1).
#include <bits/stdc++.h> 
using namespace std;

void explainQueue()
{
    queue <int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.emplace(4);
    cout << q.back() << endl;
    q.back() += 5;
    cout << q.back() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;

}
int main()
{
    explainQueue();
}