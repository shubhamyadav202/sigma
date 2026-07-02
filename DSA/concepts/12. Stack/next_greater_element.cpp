#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Passed by reference to avoid copying overhead
void nextGreater(vector<int> &arr, vector<int> &ans)
{
    stack<int> s;
    int index = arr.size() - 1;
    
    // The last element never has a next greater element
    ans[index] = -1; 
    
    // CRITICAL FIX: Push the actual array element, not 'ans[index]' (-1)
    s.push(arr[index]); 

    for(index = index - 1; index >= 0; index--)
    {
        int curr = arr[index];  

        // Pop elements that are smaller than or equal to the current element
        while(!s.empty() && curr >= s.top())
        {
            s.pop();
        }

        // If stack is empty, no greater element exists to the right
        if(s.empty())
        {
            ans[index] = -1;
        }
        else
        {
            ans[index] = s.top();  
        }

        // Push the current element for future comparisons
        s.push(curr);
    }

    // Print the results
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans = {0,0,0,0,0}; // Initializes a vector of size 5 with 0s

    nextGreater(arr, ans);
    return 0;
}