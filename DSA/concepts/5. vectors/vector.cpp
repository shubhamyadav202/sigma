#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> array(3,-1);

    array.push_back(10);
    array.push_back(20);
    array.push_back(30);
    
    for(int i = 0; i < array.size(); i++)
    {
        cout<<array[i]<<endl;
    }
    
    array.pop_back();
    
    for(int i = 0; i < array.size(); i++)
    {
        cout<<array[i]<<endl;
    }

    return 0;
}