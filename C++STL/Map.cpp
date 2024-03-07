// Map is a container which stores everything in respect of key and value where key is unique but value can be 
// same for different key. And it can be of any data type.
#include <bits/stdc++.h>
using namespace std;

void explainMap()
{
    map<int, int> mpp;  // map < key, value > map_name;
    // Ways to insert value in the map.
    mpp[1] = 2;
    mpp.insert({2,4});
    
    // Another declaration
    map<pair<int,int>, int> m;
    m[{2,3}] = 10;

    for(auto it : mpp)
    {
        cout << it.first << "    " << it.second;
    }
    cout << endl;
    cout << mpp[1] << " " << mpp[4];

    auto it = mpp.find(2);
    

    // All the functions lower bound, upper bound, erase, swap, size, empty are same as other containers.
    
    
}
int main()
{
    explainMap();
}