// Vector is also a container which comes under the vector header file. It is also called as Dynamic Array.
#include<bits/stdc++.h>
using namespace std;

void explainVector()
{
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    v.emplace_back(7);
    cout << v[0] << " " << v[1] << endl;

    vector <int> v1(10,100);
    // for(int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i] << " ";
    // }
    vector <pair<int,int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(3,4);

    vector <int> v3(5,2);
    vector <int> vec(v3);
    // for(int i = 0; i < v3.size(); i++)
    // {
    //     cout << v3[i] << " ";
    // }
    
    // vector <int> :: iterator it= v.begin();
    // cout <<  endl ;
    // for(vector <int> :: iterator it= v.begin(); it != v.end(); it++)
    // {
    //        cout << *(it) << " ";
    // }
    
    v.erase(v.begin() + 1,v.begin()+4);
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    // for(auto it: v)
    // {
    //     cout << it << " ";
    // }
    cout << endl;
    v.insert(v.begin()+3,10,10);
    for(auto it: v)
    {
    cout << it << " ";
    }
    
    cout << endl;
    cout << v.size();
    v.pop_back();
    v.pop_back();
    
    for(auto it: v)
    {
    cout << it << " ";
    }
    cout << endl;
    cout << v.empty() << endl; 
    v.clear();
    cout << v.empty();


}
int main()
{
    explainVector();
}