#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char word[],int n)
{
    int start = 0;
    int end = n - 1;

    while(start <= end)
    {
        if(word[start] != word[end])
        {
            cout<<"Not a Valid Palindrome";
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    cout<<"Valid Palindrome";
    return true;
}

int main()
{
    char word[] = "madam";
    isPalindrome(word,strlen(word));
    return 0;
}