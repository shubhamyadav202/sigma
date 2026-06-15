#include<iostream>
using namespace std;

void countSetBits(int num)
{
    int count = 0; 

    // Loop runs until number becomes 0
    while(num > 0)
    {
        int lastDigit = num & 1; 
        // num & 1 checks the last bit:
        // if last bit is 1 → result is 1
        // if last bit is 0 → result is 0

        count += lastDigit; 
        // if last bit is 1 → count increases
        // if 0 → no change

        num = num >> 1; 
        // right shift removes the last bit
        // example: 1010 → 101 → 10 → 1 → 0
    }

    cout << count; 
}
    
int main()
{
    countSetBits(10); 
    return 0;
}