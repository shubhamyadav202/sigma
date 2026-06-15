#include<iostream>
#include<vector>
using namespace std;

int gridWays(int row,int col,int n,int m,string ans)
{
    if(row == n-1 && col == m-1) // Reached to the Destination
    {
        cout<<ans<<endl;
        return 1; 
    }

    if(row >= n || col >= m)
    {
        return 0;
    }
    else
    {
        // Right Move:-
        int value1 = gridWays(row,col+1,n,m,ans + " Right");

        // Down Move:-
        int value2 = gridWays(row + 1,col,n,m,ans + " Down");

        return value1 + value2;
    }
}

int main()
{
    int n = 3;
    int m = 3;
    string ans = "";

    cout<<"Ways :"<<gridWays(0,0,n,m,ans);
    return 0;
}