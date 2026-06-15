#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

void printarray(int array[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}

void selectionSort(int array[],int n)
{
    for(int i = 0; i < n; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        swap(array[i],array[minIndex]);
    }
}

int main()
{
    int n = 6;
    int array[n] = {5,2,1,6,3,4};

    cout<<"Before Sorting : ";
    printarray(array,n);

    selectionSort(array,n);
    cout<<endl;
    
    cout<<"After Sorting : ";
    printarray(array,n);

    return 0;
}