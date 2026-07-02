#include<iostream>
using namespace std;

// Recursive function to print numbers from n down to 1
void numbers(int n)
{
    // BASE CASE: Stops the recursion when n reaches 0
    if(n == 0)
    {
        return; // Exit the function and stop further execution
    }
    // RECURSIVE STEP: Executes if the base case isn't met
    else
    {
        cout << n << " "; // Print the current number followed by a space
        numbers(n - 1);   // Recursive call: Calls the function again with a smaller value (n-1)
    }
}

int main()
{
    // Start the recursion by passing 10 to the function
    // This will print: 10 9 8 7 6 5 4 3 2 1
    numbers(10);
    
    return 0; // Indicate successful program execution
}