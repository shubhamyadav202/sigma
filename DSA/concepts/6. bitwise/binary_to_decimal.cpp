#include<iostream>
using namespace std;

// Function to convert binary number to decimal
void binarytoDecimal(int binaryNum)
{
    int n = binaryNum;
    int decimalNum = 0;  // to store final decimal value
    int power = 1;       // represents 2^0, 2^1, 2^2...

    // Loop runs until binary number becomes 0
    while(n > 0)
    {
        int lastDigit = n % 10;  
        // get last digit of binary (0 or 1)

        decimalNum += lastDigit * power;  
        // add (digit × corresponding power of 2)

        power = power * 2;  
        // move to next power of 2 (1 → 2 → 4 → 8...)

        n = n / 10;  
        // remove last digit
    }

    cout << decimalNum << endl; // print decimal result
}

int main()
{
    binarytoDecimal(1010); 
    // 1010 (binary) → 10 (decimal)

    return 0;
}