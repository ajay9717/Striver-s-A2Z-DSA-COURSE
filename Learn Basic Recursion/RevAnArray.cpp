// Reverse an array using recursion.
#include <bits/stdc++.h>
using namespace std;

// Two pointer approach.
void ReverseAnArray(int n, int l, int r, int arr[])
{
    if(l >= r)
    return;
    swap(arr[l], arr[r]);
    ReverseAnArray(n,l+1, r-1,arr);
}

// Single pointer approach
void revAnArray(int n, int p, int arr[])
{
    if(p >= n/2)
    return;

    swap(arr[p] , arr[n-p-1]);
    revAnArray(n, p+1, arr);
}

int main()
{
    int p = 0;
    int n;
    cout << "Enter the length of the array";
    cin >> n;

    int arr[n];
    cout << "Enter the elements into the array" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    revAnArray(n, p, arr);
    cout << "After reversing from first approach" << endl;
    for(int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    int l = 0;
    int r = n-1;
    ReverseAnArray(n, l, r, arr);
    cout << "After reversing from second approach" << endl;
    for(int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}