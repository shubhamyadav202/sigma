#include<iostream>
using namespace std;

class Example{
    public:
    // Constructor → called when object is created
    Example(){
        cout<<"Constructor..."<<endl;
    }

    // Destructor → called when object is destroyed
    ~Example(){
        cout<<"Destructor..."<<endl;
    }
};

int main()
{
    int a = 0;

    // Checking condition
    if(a==0)
    {
        // Static object → created only once
        // Lifetime = entire program (till program ends)
        static Example eg1;
    }

    // This will execute after the if block
    cout<<"Code Endingg.."<<endl;

    return 0;
}