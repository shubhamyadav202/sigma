#include<iostream>
#include<queue>
using namespace std;

void firstNonRepeat(string str) // O(n)
{
    queue<char> q;
    int frequency[26] = {0};
    
    for(int i = 0 ; i < str.size() ; i++)
    {
        char ch = str[i];
        q.push(ch);
        frequency[ch-'a']++;

        while(!q.empty() && frequency[q.front() - 'a'] > 1)
        {
            q.pop();
        }

        if(q.empty())
        {
            cout<<"-1"<<" ";
        }
        else
        {
            cout<<q.front()<<" ";
        }
    }
}

int main()
{
    string str = "aabccxb";

    firstNonRepeat(str);
    return 0;
}