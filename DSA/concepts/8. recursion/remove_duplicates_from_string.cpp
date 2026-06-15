#include<iostream>
using namespace std;

// Function to remove duplicate characters from a string
void removeDuplicates(string str, string ans, int i, int map[26])
{
    // Base case
    // If we reach the end of the string,
    // print the final answer
    if(i == str.size())
    {
        cout << ans << endl;
        return;
    }

    // Find index of current character
    // Example:
    // 'a' -> 0
    // 'b' -> 1
    // 'c' -> 2
    int mapIndex = (int)(str[i] - 'a');

    // If character is already visited
    // then it is a duplicate
    if(map[mapIndex] == true)
    {
        // Skip duplicate character
        removeDuplicates(str, ans, i + 1, map);
    }
    else // Character is not duplicate
    {
        // Mark character as visited
        map[mapIndex] = true;

        // Add current character to answer string
        removeDuplicates(str, ans + str[i], i + 1, map);
    }
}

int main()
{
    // Original string
    string str = "appnnacollege";

    // Empty string to store result
    string ans = "";

    // Array to keep track of visited characters
    // Initially all values are false
    int map[26] = {false};

    // Function call
    removeDuplicates(str, ans, 0, map);

    return 0;
}