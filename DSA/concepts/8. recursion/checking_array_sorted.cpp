#include<iostream>   // Header file for input and output
using namespace std;

// Function to check whether the array is sorted or not
bool isSorted(int arr[], int size, int i)
{
    // Base condition:
    // If index reaches the last element,
    // it means all elements are in sorted order
    if(i == size - 1)
    {
        return true;
    }

    // If current element is greater than next element,
    // array is not sorted
    else if(arr[i] > arr[i + 1])
    {
        return false;
    }

    // Recursive call to check next pair of elements
    else
    {
        return isSorted(arr, size, i + 1);
    }
}

int main()
{
    // Declaring and initializing array
    int arr[5] = {1, 2, 3, 4, 5};

    // Calling function to check if array is sorted
    // Output: 1 means true (sorted)
    // Output: 0 means false (not sorted)
    cout << isSorted(arr, 5, 0);

    return 0;   // Indicates successful execution
}