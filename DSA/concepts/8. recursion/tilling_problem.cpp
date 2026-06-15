#include<iostream>
using namespace std;

// Function to count total ways
// to tile a 2 x n floor using 2 x 1 tiles
int tilingProblem(int n) // Floor size = 2 x n
{
    // Base cases
    // If floor length is 0 or 1,
    // only 1 way is possible
    if(n == 0 || n == 1)
    {
        return 1;
    }

    // Case 1:
    // Place tile vertically
    // Remaining floor size = 2 x (n-1)
    int ans1 = tilingProblem(n - 1);

    // Case 2:
    // Place tile horizontally
    // Remaining floor size = 2 x (n-2)
    int ans2 = tilingProblem(n - 2);

    // Total ways
    return ans1 + ans2;
}

int tiling(int n) // Floor size = 4 x n   Tile Size = 4 x 1
{
    if(n < 4)
    {
        return 1;
    }

    if(n == 4)
    {
        return 2;
    }

    else
    {
        return tiling(n-1) + tiling(n-4);
    }
}

int main()
{
    // Function call for n = 5
    cout << tilingProblem(5);

    return 0;
}