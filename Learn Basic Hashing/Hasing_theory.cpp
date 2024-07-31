//Hashing also called as pre storing or fetching
//Below code is for number hashing
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array";
    cin >> size;

    int array[size];
    cout << "Enter the elements in the array";

    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for(int i = 0; i < size; i++)
    {
        cout << array[i]  << " ";
    }

    // Precomputation
    int hash[10] = {0};
    for(int i = 0; i < size; i++)
    {
        hash[array[i]] += 1;
    }

    int number;
    cout << "Enter the numbers of element for which you want to find the frequency";
    cin >>number;

    while(number--)
    {
        cout << "Enter the query" << endl;
        int query;
        cin >> query;
        cout << "Frequency of " << query  << " is ";
        cout << hash[query] << endl;
    }
    
    
    
    return 0;
}