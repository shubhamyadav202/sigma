#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter any String :";
    getline(cin,str);

    cout<<str.length();
    cout<<str.substr(0,5);
    cout<<str.find("Tony",14); //It will return the index where the word is.


    // cout<<str<<endl;
    // cout<<str[0]<<endl;
    // cout<<str[1]<<endl;
    // cout<<str[2]<<endl;

    for(char ch : str)
    {
        cout<<ch;
    }
    cout<<endl;


    return 0;
}