//Pair comes under utility library.
// Pair is a container.
#include<bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair <int, int> p = {1,2};
    cout << p.first  << " " << p.second << endl;


    pair <int, pair<int,int>> p1 = {1,{2,3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair <int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[0].first << " " << arr[0].second << " " << arr[2].first << " " << arr[2].second;

}
int main()
{
    explainPair();
}