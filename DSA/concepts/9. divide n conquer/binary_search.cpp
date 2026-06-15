#include<iostream>
using namespace std;

int binarySearch(int array[],int n,int key)
{
    int start = 0;
    int end = n-1;
    
    while(start <= end)
    {
        int mid = ((start + end)/2);
    
        if(array[mid] == key)
        {
            return mid;
        }
        else if(array[mid] > key)
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

    int array[10] = {2,4,6,8,10,12,14,16,18,20};

    cout<<binarySearch(array,10,14);

    return 0;
}