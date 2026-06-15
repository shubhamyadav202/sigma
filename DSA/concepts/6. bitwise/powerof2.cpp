#include<iostream>
using namespace std;

int powerof2(int num)
{
    // (num & (num - 1)) removes the last set bit
    // If result becomes 0 → number had only one set bit → power of 2
    if((num & (num - 1)) == 0)
    {
        return 1; // true → it is a power of 2
    }
    else
    {
        return 0; // false → not a power of 2
    }
}

int main()
{
    cout << powerof2(4) << endl;    
    // 4 = 100 → only one '1' → power of 2 → output: 1

    cout << powerof2(16) << endl;   
    // 16 = 10000 → only one '1' → power of 2 → output: 1

    cout << powerof2(13) << endl;   
    // 13 = 1101 → multiple '1's → not power of 2 → output: 0

    cout << powerof2(7) << endl;    
    // 7 = 111 → multiple '1's → not power of 2 → output: 0

    return 0;
}