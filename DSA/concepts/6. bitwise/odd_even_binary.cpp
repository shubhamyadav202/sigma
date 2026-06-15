#include<iostream>
using namespace std;

void oddEven(int num)
{
    // (num & 1) checks the last bit of the number
    // If last bit = 0 → number is Even
    // If last bit = 1 → number is Odd

    if(!(num & 1))
    {
        // !(num & 1) means last bit is 0 → Even
        cout << "Even" << endl;
    }
    else
    {
        // last bit is 1 → Odd
        cout << "Odd" << endl; 
    }
}

int main()
{
    oddEven(5); // 5 = 101 → last bit 1 → Odd
    oddEven(8); // 8 = 1000 → last bit 0 → Even
    return 0;
}