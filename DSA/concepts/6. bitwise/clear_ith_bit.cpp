#include<iostream>
using namespace std;

// Function to clear (make 0) the i-th bit of a number
int clearithBit(int num,int i)
{
    int bitMask = ~(1 << i);  
    // 1 << i → creates a mask with only i-th bit = 1
    // example: i = 1 → 0001 << 1 = 0010
    // ~(...) → flips all bits → 1101
    // now i-th bit becomes 0, rest are 1

    return (num & bitMask);  
    // AND operation:
    // i-th bit becomes 0
    // all other bits remain same
}

int main()
{
    cout << clearithBit(6,1) << endl;
    // 6 = 0110
    // clear bit at index 1 → result = 0100 = 4

    return 0;
}