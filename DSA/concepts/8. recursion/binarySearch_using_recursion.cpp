#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int start,int end,int key)
{
    if(start > end)
    {
        return -1;
    }

    int mid = ((start+end)/2);

    if(arr[mid] == key)
    {
        return mid;
    }
    else if(arr[mid] > key)
    {
        return binarySearch(arr,start,mid-1,key);
    }
    else
    {
        return binarySearch(arr,mid+1,end,key);
    }
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    int end = arr.size()-1;

    cout<<binarySearch(arr,0,end,7);
    return 0;
}