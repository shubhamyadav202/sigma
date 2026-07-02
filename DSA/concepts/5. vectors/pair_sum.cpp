#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> a,int target)
{
    int start = 0;
    int end = a.size()-1;
    int currentSum = 0;
    vector<int> ans;

    while(start<end)
    {
        currentSum = a[start] + a[end];
        if(currentSum == target)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(currentSum < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {2,7,11,15};
    int target = 9;

    vector<int> ans = pairSum(vec,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}