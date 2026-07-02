#include<iostream>
using namespace std;

int main()
{
    string str;
    int count = 0;

    cout<<"Enter Any String :";
    getline(cin,str);

    for(int i = 0;i<=str.length();i++)
    {

        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }
    }

    cout<<count;
    return 0;
}