#include<iostream>
using namespace std;

// Function to get the value of i-th bit (0 or 1)
int getithBit(int num,int i)
{
    int bitMask = 1 << i;  
    // create a bitmask with only i-th bit = 1
    // example: i = 1 → 0001 << 1 = 0010

    if(!(num & bitMask))
    {
        // if result is 0 → i-th bit is 0
        return 0;
    }
    else
    {
        // if result is non-zero → i-th bit is 1
        return 1;
    }
}

int main()
{
    cout << getithBit(7,1); 
    // 7 = 0111
    // checking 1st bit (from right, 0-based index)
    // bit is 1 → output: 1

    return 0; 
}