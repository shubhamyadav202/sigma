#include<iostream>
using namespace std;

void printarray(int array[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}

void insertionSort(int array[],int n)
{   
        for (int i = 1; i < n; i++) // Loop for passes
    {                                       
        int current = array[i];
        int previous = i - 1;

        // loop for each pass
        while (previous >= 0 && array[previous] > current)
        {
            array[previous + 1] = array[previous];
            previous--;
        }
        array[previous + 1] = current;
    }
}

int main()
{
    int n = 6;
    int array[n] = {5,2,1,6,3,4};

    cout<<"Before Sorting : ";
    printarray(array,n);

    insertionSort(array,n);
    cout<<endl;
    
    cout<<"After Sorting : ";
    printarray(array,n);
    return 0;
}