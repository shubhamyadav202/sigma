#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string str1,string str2)
{
    if(str1.length() != str2.length())
    {
        cout<<"Not Valid Anagrams";
        return false;
    }
    else
    {
        int count[26] = {0};

        for(int i = 0;i<str1.length();i++)
        {
            int idx = str1[i]-'a';
            count[idx]++;
        }

        for(int j = 0;j<str2.length();j++)
        {
            int idx = str2[j]-'a';

            if(count[idx] == 0)
            {
                cout<<"Not Valid Anagrams";
                return false;
            }
            count[idx]--;
        }

        cout<<"Valid Anagrams";
        return true;
    }
}
int main()
{
    string str1 = "anagram";
    string str2 = "nagaram";

    isAnagram(str1,str2);
    return 0;
}