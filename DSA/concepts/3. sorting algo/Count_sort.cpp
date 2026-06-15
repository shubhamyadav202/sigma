#include<iostream>
#include<climits>
using namespace std;

void printarray(int array[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}

void countSort(int array[],int n)
{
    int frequency[10000] = {0};
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    
    for(int i = 0;i<n;i++)
    {
        frequency[array[i]]++;
        minVal = min(minVal,array[i]);
        maxVal = max(maxVal,array[i]); 
    }

    for(int i = minVal,j=0;i<=maxVal;i++)
    {
        while(frequency[i] > 0)
        {
            array[j++] = i;
            frequency[i]--;
        }
    }
}

int main()
{
    int n = 8;
    int array[n] = {1,4,1,3,2,4,3,7};

    cout<<"Before Sorting : ";
    printarray(array,n);

    countSort(array,n);
    cout<<endl;
    
    cout<<"After Sorting : ";
    printarray(array,n);

    return 0;
}