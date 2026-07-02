#include<iostream>
#include<cstring>
using namespace std;

void toLowercase(char word[],int n)
{
    for(int i=0;i<n;i++)
    {
        char ch = word[i];
        if(ch>='a' && ch<='z') //Lowercase
        {   
            continue;
        }
        else //Uppercase
        {
            word[i] = ch - 'A' + 'a';
        }
    }
}

int main()
{
    char word[] = "APPLEE";
    toLowercase(word,strlen(word));

    cout<<word<<endl;   
    return 0;
}