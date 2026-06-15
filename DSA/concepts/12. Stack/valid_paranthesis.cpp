#include<iostream>
#include<stack>
using namespace std;

bool validParanthesis(string str) // O(n)
{
    stack<char> s;
    
    for(int i = 0; i < str.size(); i++)
    {
        char ch = str[i];

        if(ch == '(' || ch == '{' || ch == '[') // Opening
        {
            s.push(ch);
        }
        else // Closing
        {
            if(s.empty())
            {
                return false;
            }

            // Matching
            int top = s.top();

            if((top == '{' && ch == '}') || (top == '[' && ch == ']') || (top == '(' && ch == ')'))
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }

    if(s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str = "{[()]}";

    cout<<validParanthesis(str);
    return 0;
}