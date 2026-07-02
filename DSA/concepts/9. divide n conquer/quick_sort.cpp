#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int startIndex,int endIndex)
{
    int i = startIndex - 1;
    int pivot = arr[endIndex];

    for(int j = startIndex; j < endIndex ;j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    i++;
    swap(arr[i],arr[endIndex]);

    //pivotindex = i
    return i;
}

void quickSort(vector<int> &arr,int startIndex,int endIndex)
{
    if(startIndex >= endIndex)
    {
        return;
    }

    int pivot = partition(arr,startIndex,endIndex);

    quickSort(arr,startIndex,pivot-1);//Left Half
    quickSort(arr,pivot+1,endIndex);// Right Half
}

void printArray(vector<int> &arr,int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr = {9,1,6,3,8,4};
    quickSort(arr,0,arr.size()-1);

    printArray(arr,arr.size()-1);   
    return 0;
}