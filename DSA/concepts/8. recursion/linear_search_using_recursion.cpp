#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &arr,int i,int end,int key)
{
    if(i == end)
    {
        return -1;
    }
    else if(arr[i] == key)
    {
        return i; 
    }
    else
    {
        return linearSearch(arr,i+1,end,key);
    }
}

int main()
{
    vector<int> arr = {6,2,4,9,7,3};
    cout<<linearSearch(arr,0,arr.size(),9);
    return 0;
}