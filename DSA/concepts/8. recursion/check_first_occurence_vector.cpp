#include<iostream>   // Header file for input and output
#include<vector>     // Header file for using vector
using namespace std;

// Function to find the first occurrence of a key in the vector
int firstOccurence(vector<int> arr, int i, int key)
{
    // Base condition:
    // If index reaches the size of vector,
    // key is not found
    if(i == arr.size())
    {
        return -1;
    }

    // If key matches the current element,
    // return the current index
    if(key == arr[i])
    {
        return i;
    }

    // Recursive call to check next index
    else
    {
        return firstOccurence(arr, i + 1, key);
    }
}

int main()
{
    // Declaring and initializing vector
    vector<int> arr = {1, 2, 3, 6, 5, 3};

    // Calling function to find first occurrence of 3
    // Output will be index position of first 3
    cout << firstOccurence(arr, 0, 3);

    return 0;   // Indicates successful program execution
}