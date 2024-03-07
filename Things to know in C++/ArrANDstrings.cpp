//Arrays and Strings.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];           // 1D array
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];            
    cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];

    int array[2][2];      // 2D array.
    cin >> array[0][0] >> array[0][1];
    cout << array[0][0] << array[0][1];

    string s;             //String.
    getline(cin, s);
    cout << s;
}