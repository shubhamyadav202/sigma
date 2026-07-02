// Kadane's Algorithm :-

#include<iostream>
#include <climits>

using namespace std;

void maxSubarraySum(int array[],int n)
{
    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i=0;i<n;i++)
    {
        currentSum = currentSum + array[i];
        maxSum = max(currentSum,maxSum);

        if(currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout<<"Maximum Subarray Sum :"<<maxSum<<endl;
}

int main()
{
    int n = 6;
    int array[n] = {2,-3,6,-5,4,2};

    maxSubarraySum(array,n);     

    return 0;
}