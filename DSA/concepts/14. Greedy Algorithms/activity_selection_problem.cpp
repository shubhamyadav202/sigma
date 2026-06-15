#include<iostream>
#include<vector>
using namespace std;

int maxNoActivities(vector<int> &start,vector<int> &end)
{
    //sort on basis of end time (in this question it's already sorted)
    // A0 selected
    cout<<"Selecting A0"<<endl;
    int count = 1;
    int currentEndTime = end[0];
    
    for(int i = 1;i <= start.size();i++)
    {
        if(start[i] >= currentEndTime)// non-overlapping   
        {
            cout<<"Selecting A"<<i<<endl;
            count++;
            currentEndTime = end[i];
        }
    }

    return count;
}

int main()
{
    vector<int> start = {1,3,0,5,8,5};
    vector<int> end = {2,4,6,7,9,9};

    cout<<maxNoActivities(start,end);
    return 0;
}