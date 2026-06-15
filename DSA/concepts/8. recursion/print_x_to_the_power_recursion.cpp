#include<iostream>
using namespace std;

// Naive Approach
// Calculates x raised to the power 'pow' by multiplying x one by one.
// Time Complexity: O(n) where n is the power.
// Space Complexity: O(n) due to the recursive call stack.
int power(int x, int pow) 
{
    // Base case 1: 0 raised to any power is 0
    if(x == 0)
    {
        return 0;
    }
    // Base case 2: Any number raised to the power 0 is 1
    if(pow == 0)
    {
        return 1;
    }
    
    // Recursive step: x^pow = x * x^(pow-1)
    return x * power(x, pow - 1);
}

// Optimized Approach (Binary Exponentiation)
// Calculates x raised to the power 'pow' by dividing the power in half at each step.
// Time Complexity: O(log n) where n is the power.
// Space Complexity: O(log n) due to the recursive call stack.
int powerOfx(int x, int pow) 
{
    // Base case: Any number raised to the power 0 is 1
    if(pow == 0)
    {
        return 1;
    }

    // Recursively calculate x^(pow/2)
    // We store this in a variable to avoid calculating it twice, 
    // which is the key to achieving O(log n) time complexity.
    int halfPower = powerOfx(x, pow / 2);
    cout<<powerOfx(x,pow/2)<<endl;
    
    // Square the result: x^(pow/2) * x^(pow/2) = x^pow (if pow is even)
    int halfPowerSquare = halfPower * halfPower;

    // Check if the current power is odd
    if(pow % 2 != 0)
    {
        // If odd, x^pow = x * x^(pow-1). 
        // Since halfPowerSquare represents x^(pow-1) when pow is odd (due to integer division truncation),
        // we must multiply by an extra 'x'.
        return x * halfPowerSquare;
    }
    else
    {
        // If even, halfPowerSquare exactly equals x^pow
        return halfPowerSquare;
    }
}

int main()
{
    // Output the result of 2^10 (which is 1024) using the optimized function
    cout << powerOfx(2, 5);
    return 0;
}