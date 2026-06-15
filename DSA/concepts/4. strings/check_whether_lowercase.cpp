#include<iostream>
using namespace std;

int main()
{
    string str = "HELCLSLCLs";
    bool isLowercase = false;

    for(int i = 0;i<=str.length();i++)
    {
        char ch = str[i];

        if(ch>='a' && ch<='z')
        {
            isLowercase = true;
        }
    }

    cout<<isLowercase;
    return 0;
}