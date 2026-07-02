#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int startIndex,int endIndex,int mid)
{
        vector<int> temp;
        int i = startIndex;// Points to the first element of left Half. 
        int j = mid + 1;// Points to the first element of right Half.

        while(i<=mid && j<=endIndex)
        {
            if(arr[i] <= arr[j])
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

        while(j<=endIndex)
        {
            temp.push_back(arr[j]);
            j++;
        }

        //Vector to the original array :-
        for(int idx = startIndex,x=0;idx<=endIndex;idx++)
        {
            arr[idx] = temp[x];
            x++;
        }
    
}

void mergeSort(vector<int> &arr,int startIndex,int endIndex)
{
    int mid = ((startIndex + endIndex)/2);

    if(startIndex >= endIndex)
    {
        return;
    }
    else
    {
        mergeSort(arr,startIndex,mid); // left half
        mergeSort(arr,mid+1,endIndex); //right half
        merge(arr,startIndex,endIndex,mid); //Conquer
    }
}
 
void printArray(vector<int> &arr,int n)
{
    for(int i = 0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr = {6,3,7,5,2,4};

    cout<<"Before Sorting :";
    printArray(arr,arr.size()-1);
    
    cout<<"After Sorting :";
    mergeSort(arr,0,arr.size()-1);
    printArray(arr,arr.size()-1);
    return 0;
}