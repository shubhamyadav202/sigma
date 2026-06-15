#include <iostream>
#include <string>
using namespace std;

// Function to generate and print all possible subsets of a string
void printSubsets(string str, string subsets)
{
    // Get the current length of the string
    int n = str.size();

    // Base Case:
    // If the string becomes empty, print the subset formed so far
    if (n == 0)
    {
        cout << subsets << endl;
        return;
    }
    else
    {
        // Take the first character of the current string
        char ch = str[0];

        /*
            Recursive Choice 1: Include the current character

            str.substr(1, n-1)
            -> Creates a new string starting from index 1
            -> Removes the first character from the current string

            subsets + ch
            -> Adds the current character to the subset
        */
        printSubsets(str.substr(1, n - 1), subsets + ch);

        /*
            Recursive Choice 2: Exclude the current character

            Move to the remaining string without adding
            the current character to the subset.
        */
        printSubsets(str.substr(1, n - 1), subsets);
    }
}

int main()
{
    // Original string whose subsets need to be generated
    string str = "abc";

    // Initially subset is empty
    string subsets = "";

    // Function call to generate all subsets
    printSubsets(str, subsets);

    return 0;
}