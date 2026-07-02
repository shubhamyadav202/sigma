#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> a = {4,1,8,7};
    vector<int> b = {2,3,6,5};
    int absoluteDiff = 0;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i = 0; i < a.size() ; i++)
    {
        absoluteDiff += abs(a[i] - b[i]);
    }

    cout<<"Minimum Absolute Difference : "<<absoluteDiff<<endl;
    return 0;
}