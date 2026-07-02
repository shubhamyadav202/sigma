#include<iostream>
using namespace std;

int main()
{ 
    for(int i = 1; i%3!=0 && i%5!=0 ;i++)
    { 
        cout<<i<<endl;
    }

    cout<<((5%3==0) && (5/0==10));
    
    return 0;
}
