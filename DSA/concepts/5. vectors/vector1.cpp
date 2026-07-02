#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec1 = {1,2,3,4,5};
    cout<<vec1.size()<<"\n"; 

    vector<int> vec2(10,20);

    for(int i=0;i<vec2.size();i++)
    {
        cout<<vec2[i]<<endl;
    }

    return 0;
}