#include<iostream>
using namespace std;


int setithBit(int num,int i)
{
    int bitMask = 1 << i;  
    // create a bitmask where only i-th bit is 1
    // example: i = 3 → 0001 << 3 = 1000

    return (num | bitMask);  
    // OR operation:
    // if bit is already 1 → stays 1
    // if bit is 0 → becomes 1
}

int main()
{
    cout << setithBit(6,3); 
    // 6 = 0110
    // bitMask = 1000
    // result = 1110 (14)

    return 0;
}