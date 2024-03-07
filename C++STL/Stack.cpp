// Stack is a data structure which works on the LIFO principle. It basically has three functions push, pop and 
// top where push insert a element in the top of the stack and pop remove that element from the top and top 
// function is just used to print the element which is on the top. The complexity of all these operations are 
// executing in constant time means big O(1).
#include<bits/stdc++.h>
using namespace std;

void explainStack()
{
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);
    st.emplace(5);
    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;
    stack <int> s1;
    st.swap(s1);
    cout << s1.top() << endl;
}
int main()
{
    explainStack();
}