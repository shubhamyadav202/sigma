#include<iostream>
using namespace std;

int binarySearch(int array[],int n,int target)
{
    int start = 0;
    int end = n - 1;
    
    for(int i = 0;i<n;i++)
    {
        int mid = (start + end)/2;

        if(array[mid] == target)
        {
            return mid;
        }
        else if(array[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n = 6;
    int target = 10;
    int array[n] = {1,2,3,4,5,10};

    cout<<binarySearch(array,n,target);
    return 0;
}