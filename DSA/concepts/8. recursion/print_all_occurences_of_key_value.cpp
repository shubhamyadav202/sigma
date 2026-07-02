#include<iostream>
#include<vector>
using namespace std;

int occurences(vector<int> arr,int i,int key)
{
    if(i == arr.size())
    {
        return -1;
    }

    if(arr[i] == key)
    {
        cout<<i<<" ";
    }
    
    return occurences(arr,i+1,key);
}

int main()
{
    vector<int> arr = {3,2,4,5,6,2,7,2,2};

    occurences(arr,0,2);
    return 0;
}