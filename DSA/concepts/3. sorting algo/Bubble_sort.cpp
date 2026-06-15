#include<iostream>
#include <climits>
#include <algorithm>
using namespace std;

void printarray(int array[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}

void bubbleSort(int array[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        bool isSwap = false;
        for(int j = 0;j<n-i-1;j++)
        {
            if(array[j] > array[j+1])
            {
                swap(array[j],array[j+1]);  
                isSwap = true;
            }
        }
        if(!isSwap)
        {
            return;
        }
    }
}

int main()
{
    int n = 6;
    int array[n] = {5,2,1,6,3,4};

    cout<<"Before Sorting : ";
    printarray(array,n);

    bubbleSort(array,n);
    cout<<endl;
    
    cout<<"After Sorting : ";
    printarray(array,n);

    return 0;
}