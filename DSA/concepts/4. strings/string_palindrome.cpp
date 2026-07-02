#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str)
{
    int n = str.length();
    int start = 0;
    int end = n-1;

    while(start < end)
    {
        if(tolower(str[start]) != tolower(str[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    string str = "madam";

    if(isPalindrome(str) == true)
    {
        cout<<"String is a Palindrome"<<endl;
    }
    else
    {
        cout<<"String is not Palindrome"<<endl;
    }



    return 0;
}