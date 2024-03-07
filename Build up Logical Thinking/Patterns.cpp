#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "* "; 
        }
        cout << endl;
    }
}
void print3(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i ; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}
void print4(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }
}
void print5(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print6(int n)

{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void print7(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1 ; j++)
        {
              cout << " ";
        }
        for(int k = 0; k < 2*i+1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print8(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2*n-i-(i+1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print9(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1 ; j++)
        {
              cout << " ";
        }
        for(int k = 0; k < 2*i+1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2*n-i-(i+1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print10(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
}
void print11(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if((i+j) % 2 == 0)
            cout << "1";
            else 
            cout << "0";
        }
        cout << endl;
    }
}
void print12(int n)
{
    int space = 2 * (n-1);
    for(int i = 0; i < n; i++)
    {
        
        for(int j = 0; j <= i ; j++)
        {
            cout << j + 1;
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for(int j = i; j >= 0; j--)
        {
            cout << j + 1 ;
        }
        cout << endl;
        space = space - 2;
    }
}
void print13(int n)
{
    int x = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << x << " ";
            x++; 
        }
        cout << endl;
    }
}
void print14(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j ;
        }
        cout << endl;
    }
}
void print15(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(char j = 'A'; j <= 'A' + (n-i-1); j++)
        {
            cout << j ;
        }
        cout << endl;
    }
}
void print16(int n)
{
    for(int i = 0; i < n; i++)
    {
        char a = 'A' + i;
        for(char j = 0; j <= i; j++)
        {
            cout << a;
        }
        cout << endl;
    }
}
void print17(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int decrement = (2*i+1)/2;
        for(int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if(j < decrement)
            ch++;
            else
            ch--;
        }
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        
        cout << endl;
    }
}
void print18(int n)
{
    for(int i = 0; i < n; i++)
    {
        
        for(char j = 'A' + (n - (i + 1)); j <= 'A'+ (n-1); j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print19(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        for(int j = 0; j < 2*i; j++)
        {
            cout << " ";
        }
        for(int k = 0; k < n-i; k++)
        {
            cout << "*"; 
        }
        
        cout << endl;
    }
    int space = 2*n-2;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for(int j = 0; j <space; j++)
        {
            cout << " ";
            
        }
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        space-=2;
        cout << endl;
    }
}
void print20(int n)
{
    int space = 2*n - 2;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for(int j = 0; j < space; j++)
        {
            cout << " ";
        }  
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        space -= 2;
        cout << endl;
    }
    int space1 = 2; 
    for(int a = 0; a < n-1; a++)
    {
        for(int b = 0; b < n-a-1 ; b++)
        {
            cout << "*";
        }
        for(int c = 0; c < space1; c++)
        {
            cout << " ";
        }
        for(int d = 0; d < n-a-1 ; d++)
        {
            cout << "*";
        }
        cout << endl;
        space1 += 2;
    }
    
}
void print21(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0  || j == 0 || i == n - 1 || j == n - 1)
            cout << "*";
            else
            cout << " ";
        }
        cout << endl;
    }
}
void print22(int n)
{
    for(int i = 0; i < 2*n-1; i++)
    {
        for(int j = 0; j < 2*n - 1; j++)
        {
            int top = i; 
            int left = j;
            int right = 2*n-2-j;
            int down = 2*n-2-i;
            cout << n - min(min(top,down), min(left,right));
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    print2(n);
    return 0;
}