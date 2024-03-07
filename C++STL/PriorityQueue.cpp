// Priority Queue, as the name suggest it gives priority to the largest element or largest character or largest 
// string lexicographically, whatever datatype is stored in the priority queue it gives priority to the largest
// one of them. It also has same functions like stack and queue like push, pop and top.
// Here the time complexity of push , pop and top are BIg o(logn), Big O(logn) and O(1) respectively.

// Priority queue which gives priority to the largest element and stores it in the top is also known as 
// Max heap.

// While the priority queue which gives priority to the smallest element and stores it in the top is 
// also known as Min heap.

#include<bits/stdc++.h>
using namespace std;

void explainPriorityQueue()
{
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.emplace(3);
    pq.push(10);
    pq.push(9);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    cout << pq.size() << endl;
}
void explainPriorityQueue1()
{
    priority_queue<int , vector<int>, greater<int>> q;
    q.push(1);
    q.push(4);
    q.push(5);
    q.push(0);
    q.push(-1);
    cout << q.top() << endl;
    q.pop();
    cout << q.top() <<endl;
    q.pop();
    cout << q.top() <<endl;
    q.pop();
    cout << q.top() <<endl;
    q.pop();
    cout << q.top() <<endl;
}

int main()
{
    explainPriorityQueue1();
}