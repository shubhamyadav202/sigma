#include<iostream>   // Header file for input and output operations
using namespace std;

// Function to calculate Fibonacci number using recursion
int fibonacci(int n)
{
    // Base condition:
    // If n is 0 or 1, return n itself
    if(n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        // Recursive call:
        // fibonacci(n-1) gives previous Fibonacci number
        // fibonacci(n-2) gives second previous Fibonacci number
        // Their sum gives current Fibonacci number
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    // Calling fibonacci function with value 5
    // Output will be the 5th Fibonacci number
    cout << fibonacci(5);

    return 0;   // Indicates successful program execution
}