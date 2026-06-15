#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4,5};

    cout<<"Size :"<<vec.size()<<endl; //How many elements it contains
    cout<<"Capacity :"<<vec.capacity()<<endl; //Maximum No. of elements that vec can hold
    
    vec.push_back(20);
    
    cout<<"Size :"<<vec.size()<<endl;
    cout<<"Capacity :"<<vec.capacity();

    vec.pop_back(); // To Delete a element from an vector array.
    return 0;
}