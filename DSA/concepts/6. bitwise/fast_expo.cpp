#include<iostream>
using namespace std;

// Function to calculate x^n using Fast Exponentiation
void fastExpo(int x, int n)
{
    int ans = 1; // This will store the final result

    // Loop runs until n becomes 0
    while(n > 0)
    {
        int lastBit = n & 1; // Get last bit of n (1 if odd, 0 if even)

        // If last bit is 1, multiply current x with answer
        if(lastBit == 1)
        {
            ans = ans * x;
        }

        // Square the base for next iteration
        x = x * x;

        // Right shift n (divide n by 2)
        n = n >> 1;
    }

    // Print the final result
    cout << ans;
}

int main()
{
    fastExpo(3, 4); // Calling function to calculate 3^4
    return 0;
}