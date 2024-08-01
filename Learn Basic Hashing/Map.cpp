#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of elements in the array" << endl;
    cin >> num;

    int array[num];
    cout << "Enter the elements in the array" << endl;
     
    for(int i = 0; i < num; i++)
    {
        cin >> array[i];
    }

    map<int , int> mpp;
    for(int i = 0; i < num; i++)
    {
        mpp[array[i]]++;
    }

    int query;
    cout << "Enter the number of queries" << endl;
    cin >> query;

    while(query--)
    {
        int number;
        cout << "Enter the number whose frequency you want to find" << endl;
        cin >> number;

        cout << number << " is appearing " << mpp[number] << " times in the array" << endl;

        
    }

}