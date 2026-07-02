#include<iostream>
using namespace std;

int updateithBit(int num,int i,int val)
{
    num = num & ~(1 << i);   // clear ith bit
    num = num | (val << i); // set new value

    return num;  // ✅ return result
}

int main()
{
    cout << updateithBit(7,3,1);
    return 0;
}