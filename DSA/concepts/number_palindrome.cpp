#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0, digit;

    // Take input from the user
    cout << "Enter a number: ";
    cin >> n;

    // Store the original number for comparison later
    original = n;

    // Reverse the number
    while (n > 0) {
        digit = n % 10;               // Extract the last digit
        reversed = reversed * 10 + digit; // Add digit to the reversed number
        n = n / 10;                   // Remove the last digit
    }

    // Check if the original number and reversed number are the same
    if (original == reversed)
    {
        cout << "Palindrome number";
    }
    else
    {
        cout << "Not a palindrome";
    }

    return 0; // Indicate successful program execution
}