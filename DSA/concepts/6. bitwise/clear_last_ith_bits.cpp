#include<iostream>
using namespace std;

// Function to clear (make 0) last i bits of a number
void clearLastithBits(int num,int i)
{
    int bitMask = ~0 << i;  
    // ~0 → all bits become 1 (like 111111...)
    // shift left by i → last i bits become 0
    // example: i = 2 → 11111100

    num = num & bitMask;  
    // AND operation:
    // last i bits become 0
    // remaining bits stay same

    cout << num; // print updated number
}

int main()
{
    clearLastithBits(15,2); 
    // 15 = 1111
    // bitMask = 11111100
    // result = 1100 = 12

    return 0;
}