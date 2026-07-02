#include<iostream>
#include <climits>

using namespace std;

void trap(int heights[],int n)
{
    int leftMax[20000];
    leftMax[0] = heights[0];
    for(int i = 1;i<n;i++)
    {
        leftMax[i] = max(leftMax[i-1],heights[i-1]);
        // cout<<leftMax[i]<<" ";
    }

    int rightMax[20000];
    rightMax[n-1] = heights[n-1];
    for(int i = n-2;i>=0;i--)
    {
        rightMax[i] = max(rightMax[i+1],heights[i+1]);
        // cout<<rightMax[i]<<" ";
    }

    int waterTrapped = 0;
    for(int i = 0;i<n;i++)
    {   
        int currentWater = min(leftMax[i],rightMax[i]) - heights[i];

        if(currentWater > 0)
        {
            waterTrapped = waterTrapped + currentWater;
        }
    }   

    cout<<"Water Trapped :"<<waterTrapped<<endl;
}

int main()
{
    int heights[7] = {4,2,0,6,3,2,5};

    trap(heights,7);

    return 0;
}