#include<iostream>
using namespace std;

void decimaltoBinary(int decimalNum)
{
    int n = decimalNum;
    int power = 1; // represents 10^0, 10^1, 10^2...
    int binaryNum = 0; // to store final binary number

    // Loop runs until number becomes 0
    while(n > 0)
    {
        int remainder = n % 2;  
        // divide by 2 → remainder will be 0 or 1 (binary digit)

        binaryNum += remainder * power;  
        // add remainder at correct place value

        n = n / 2;  
        // reduce number by dividing by 2

        power = power * 10;  
        // move to next position (like 1 → 10 → 100...)
    }

    cout << binaryNum; // print final binary number
}

int main()
{
    decimaltoBinary(9); 
    // 9 → binary = 1001

    return 0;
}