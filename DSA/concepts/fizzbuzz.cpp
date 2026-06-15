#include<iostream>
using namespace std;

int main()
{
    int n;

    //Approach 1 :-
    // cout<<"Enter Anything:";
    // cin>>n;
    
    // for(int i = 1;i<=n;i++)
    // {
    //     if((i%3==0) && (i%5==0))
    //     {
    //         cout<<i<<"\t FizzBuzz"<<endl;
    //     }
    //     else if(i%3==0)
    //     {
    //         cout<<i<<"\t Fizz"<<endl;
    //     }
    //     else if(i%5==0)
    //     {
    //         cout<<i<<"\t Buzz"<<endl;
    //     }
    //     else
    //     {
    //         cout<<i<<endl;
    //     }
    // }
    
    //Approach 2 :-
    int a;
    cout<<"Enter Anything:";
    cin>>a;

    int counter3 = 0;
    int counter5 = 0;

    for(int j = 1;j<=a;j++)
    {
        counter3++;
        counter5++;

        if(counter3==3 && counter5==5)
        {
            cout<<"FizzBuzz"<<endl;
            counter3 = 0;
            counter5 = 0;
        }
        else if(counter3==3)
        {
            cout<<"Fizz"<<endl;
            counter3 = 0;
        }
        else if(counter5==5)
        {
            cout<<"Buzz"<<endl;
            counter5 = 0;
        }
        else
        {
            cout<<j<<endl;
        }
    }

    return 0;
}