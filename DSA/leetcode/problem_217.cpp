#include<iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) {

    sort(nums.begin(), nums.end());
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i - 1] == nums[i]) {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums= {1,1,1,3,3,4,3,2,4,2};

    if(containsDuplicate(nums))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }


    return 0;
}