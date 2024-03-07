// How to sort array using STL.
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
    return false;

}

void sortingInMyWay()
{
    // Sort it according to second element 
    // if second element is same, then sort
    // it according to the first element but in descending.

    pair<int, int> p[3] = {{1,2},{2,1},{4,1}};
    sort(p,p+3,comp);
    cout << p[0].first << p[0].second << p[1].first << p[1].second << p[2].first << p[2].second << endl;
}

void sortArray(int n)
{
    int array[n];
    cout << "Enter the elements into the array";
    for(int i = 0; i < n; i++)
    {
        cin >> array[i] ;
    }
    sort(array,array + n);
    cout << "After sorting" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
void sortVector(int n)
{
    vector<int> v;
    cout << "Enter the elements into the vector";
    cout << endl;
    
        v.push_back(4);
        v.push_back(4);
        v.push_back(2);
        v.push_back(1);
    sort(v.begin(),v.end());
    cout << "After sorting" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

}
int main()
{
    int n;
    cout << "Enter the input size" << endl;
    cin >> n;
    sortingInMyWay();
}