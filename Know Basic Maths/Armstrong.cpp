// Armstrong numbers are those numbers, let understand through a example suppose we have given number 123 and
// we have to check that the number is armstrong or not so we just have evaluate the cube of every single 
// digit in the given number and then add them and if the given number is same as this result so we
// can say that the number is armstrong number.
// for ex = 123 = 1^3 + 2^3 + 3^3 = 36. which is not equal to 123.
// So 123 is not a armstrong number.
// another example lets say the given number is 371.
// So now, 3^3 + 7^3 + 1^3 = 27 + 343 + 1 =  371, which is same as the given number 
// So we can say that 371 is an armstrong number.

// I have noticed that when i am using the pow function instead of multiplying it 3 times 
// it is not giving the exact value.

// The below code is just for three digit number only.
#include<bits/stdc++.h>
using namespace std;

void armstrong(int n)
{
    int originalN = n;
    int sum = 0;
    while(n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit); // Cube the last digit and add it to sum
        n = n / 10; // Removing the last digit
    }
    if(sum == originalN)
    cout << "Armstong number";
    else cout << "Not armstrong number";
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n; // Taking input from the user
    armstrong(n); // Calling the function to check if it's an Armstrong number
}

