#include<iostream>
using namespace std;

// Function to find total number of ways
// friends can remain single or pair up
int friendsPairing(int n)
{
    // Base cases
    // If there is 1 friend -> only 1 way
    // If there are 2 friends -> 2 ways
    // (single,single) or (pair)
    if(n == 0 || n == 1 || n == 2)
    {
        return n;
    }

    else
    {
        // Case 1:
        // One friend remains single
        // Remaining ways = friendsPairing(n-1)

        // Case 2:
        // One friend pairs with any of the remaining (n-1) friends
        // Remaining ways = friendsPairing(n-2)

        return friendsPairing(n-1) + (n-1) * friendsPairing(n-2);
    }
}

int main()
{
    // Function call for 3 friends
    cout << friendsPairing(3) << endl;

    return 0;
}