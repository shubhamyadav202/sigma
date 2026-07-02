#include<iostream>
using namespace std;

void numbers(int n)
{
    if(n==0){
        return;
    }
    else
    {
        numbers(n-1);
        cout<<n<<endl;
    }
}
int main()
{
    numbers(5);
    return 0;
}