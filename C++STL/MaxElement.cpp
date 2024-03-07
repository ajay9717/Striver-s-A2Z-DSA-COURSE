// This function is used to find the maximum element in the array or we can say the largest element in the array 
// And there is also a function which is used to find the minimum element or we can say the smallest element.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int max = *max_element(arr, arr+5);
    int min = *min_element(arr,arr+5);
    cout << "Largest element is " <<  max << endl << "Smallest element is " <<  min;
}