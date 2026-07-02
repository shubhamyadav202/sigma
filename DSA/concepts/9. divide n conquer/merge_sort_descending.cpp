#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int start,int end,int mid)
{
    vector<int> temp;
    int i = start;
    int j = mid + 1;

    while(i<=mid && j<=end)
    {
        if(arr[i] > arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    
    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    
    while(j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = start,x=0;idx<=end;idx++)
    {
        arr[idx] = temp[x];
        x++;
    }
}

void mergeSort(vector<int> &arr,int start,int end)
{
    int mid = ((start+end)/2);

    if(start >= end)
    {
        return;
    }
    else
    {
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,end,mid);
    }
}

void printArray(vector<int> &arr,int n)
{
    for(int i = 0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr = {8,5,3,2,6,1};
    mergeSort(arr,0,arr.size()-1);
    printArray(arr,arr.size()-1);

    return 0;
}