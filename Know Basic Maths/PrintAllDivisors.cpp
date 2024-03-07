// In this question we have to find all the divisors of given number and print all of them
// Time complexity of this approach for this question is Big O(n). Because loop is running for 
// n times.
#include<bits/stdc++.h>
using namespace std;

void anotherApproach(int n)
{
    vector<int> v = {};
    for(int i = 1; i < sqrt(n); i++)
    {
        if(n % i == 0)
        v.push_back(i);         // This loop is running for Big O(sqrt(n)) times.
        if((n/i) != i)
        v.push_back(n/i);
    }
    
    sort(v.begin(), v.end()); 
       // And this internal sorting functions take nlogn time 
       // Here n is the total no. of factor
       // So we can say O(No. of factor . log No.of factor) 
    
    
    for(auto it : v)   // And for printing it, it is taking O(n) time again where n is the no. of factor.           
    cout << it << " ";     


    // So the total time complexity for this approach is Big O(sqrt(n)) + Big O(No. of factor * log (No.of factor)) 
    // + O(no. of factors).   
}

void divisor(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        cout << i << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    anotherApproach(n);
}