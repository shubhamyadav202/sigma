#include<iostream>
#include<vector>
using namespace std;

void printarray(vector<int> arr)
{
    int n = arr.size();
    for(int i = 0;i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void zigzag(vector<int> &arr)
{
    int n = arr.size();
    int start = 0;
    int end = n-1;
    vector<int> temp;

    while(start <= end)
    {
        if(start == end)
        {
            temp.push_back(arr[start]);
            start++;
        }
        else
        {
            temp.push_back(arr[start]);
            start++;
            temp.push_back(arr[end]);
            end--;
        }
    }
    printarray(temp);
}

int main()
{
    vector<int> arr = {1,2,3,4,5};

    zigzag(arr);
    return 0;
}