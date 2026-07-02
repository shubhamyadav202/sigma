#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<float,int> p1,pair<float,int> p2)
{
    return p1.first > p2.first; // descending based on the ratio
}

int fractionalKnapsack(vector<int> &values,vector<int> &weights,int capacity) // O(nlogn)
{
    int n = values.size();
    int ans = 0;
    vector<pair<float,int>> ratio(n,make_pair(0.0,0)); // pair(ratio,index) -> (float,int)

    for(int i = 0 ; i < n; i++)
    {
        float r = values[i] / weights[i];
        ratio[i] =  make_pair(r,i);
    }

    sort(ratio.begin(),ratio.end(),compare); // O(nlogn) // Descending order me sort krna hai

    for(int i = 0 ; i < n ; i++)
    {
        int index = ratio[i].second;

        if(weights[index] <= capacity)
        {
            ans += values[index];
            capacity -= weights[index];
        }
        else
        {
            ans += ratio[i].first * capacity;
            capacity = 0;
            break;
        }
    }

    cout<<"Max value = "<<ans<<endl;
}

int main()
{
    vector<int> values = {60 , 100 , 120};
    vector<int> weights = {10 , 20 , 30};
    int capacity = 50;

    fractionalKnapsack(values,weights,capacity);
    return 0;
}