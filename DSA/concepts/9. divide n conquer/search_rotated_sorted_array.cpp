#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &arr,int start,int end,int key)
{
    if(start > end)
    {
        return -1;
    }

        int mid = ((start+end)/2);
        
        if(arr[mid] == key)
        {
            return mid;
        }`
        
        if(arr[start] < arr[mid]) //Left half Sorted
        {
            if(arr[start] <= key && key <= arr[mid])
            {
                return search(arr,start,mid-1,key);
            }
            else
            {
                return search(arr,mid+1,end,key);
            }
        }
        else // Right Half is Sorted
        {
            if(arr[mid] <= key && key <= arr[end])
            {
                return search(arr,mid+1,end,key);
            } 
            else
            {
                return search(arr,start,mid-1,key); 
            }
        }
    
}

int main()
{
    vector<int> arr = {3,4,5,6,7,0,1,2};

    cout<<search(arr,0,arr.size()-1,3);
 
    return 0;
}