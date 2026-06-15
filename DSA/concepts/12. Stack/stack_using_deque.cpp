#include<iostream>
#include<deque>
using namespace std;

class Stack{
    deque<int> deq;

    public :
    void push(int val)
    {
        deq.push_back(val);
    }

    void pop()
    {
        if(isEmpty())
        {
            return;
        }
        else
        {
            deq.pop_back();
        }
    }
    
    int top()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return deq.back();
        }
    }

    bool isEmpty()
    {
        return deq.empty();
    }
};

int main()
{
    Stack s;

    for(int i = 1;i <= 6;i++)
    {
        s.push(i);
    }

    s.pop();

    while(!s.isEmpty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}