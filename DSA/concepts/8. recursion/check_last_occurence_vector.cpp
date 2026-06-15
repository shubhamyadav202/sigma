#include<iostream>   // Header file for input and output
#include<vector>     // Header file for using vector
using namespace std;

// Function to find the last occurrence of a key in the vector
int lastOccurence(vector<int> arr, int i, int key)
{
    // Base condition:
    // If index reaches the size of vector,
    // return -1 (key not found)
    if(i == arr.size())
    {
        return -1;
    }

    // Recursive call to search in the remaining part of vector
    int indexFound = lastOccurence(arr, i + 1, key);

    // If key is not found in remaining elements
    // and current element matches the key,
    // return current index
    if(indexFound == -1 && arr[i] == key)
    {
        return i;
    }

    // Otherwise return the index found later
    return indexFound;
}

int main()
{
    // Declaring and initializing vector
    vector<int> arr = {1, 2, 3, 3, 6, 5};

    // Calling function to find last occurrence of 3
    // Output will be index of last 3
    cout << lastOccurence(arr, 0, 3);

    return 0;   // Indicates successful execution
}