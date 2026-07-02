#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
    // vector<vector<int>> vec = {{1,2,3},{4,5},{7}}; if you not fill all the spaces with values it will still not show error like array 
    
    int row, col;
    
    cout<<"Enter rows: ";
    cin>>row;
    
    cout<<"Enter columns: ";
    cin>>col;

    vector<vector<int>> vec(row,vector<int>(col)); //when we take input in 2d vector array this is syntax

    for(int i = 0;i<vec.size();i++)
    {
        for(int j = 0;j<vec[i].size();j++)
        {
            cout<<"Enter :";
            cin>>vec[i][j]; 
        }
    }
    
    for(int i = 0;i<vec.size();i++)
    {
        for(int j = 0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}