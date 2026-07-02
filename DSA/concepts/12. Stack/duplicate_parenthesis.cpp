#include<iostream>
#include<stack>
using namespace std;

bool duplicateParenthesis(string str)
{
    stack<char> s;

    for(int i = 0 ; i < str.size() ; i++)
    {
        char ch = str[i];
        if(ch != ')') // non-closing
        {
            s.push(ch);
        }
        else // closing
        {
            if(s.top() == '(')
            {
                return true;
            }

            while(s.top() != '(')
            {
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}

int main()
{
    string str1 = "((a+b)+(c+d))"; // false
    string str2 = "((a+b))"; // true

    cout<<duplicateParenthesis(str1)<<endl;
    cout<<duplicateParenthesis(str2);
    return 0;
}