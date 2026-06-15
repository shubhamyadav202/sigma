#include<iostream>
#include<deque>
using namespace std;

class Queue{
    deque<int> deq;

    public :
    void enqueue(int data)
    {
        deq.push_back(data);
    }

    void dequeue()
    {
        if(isEmpty())
        {
            return;
        }
        else
        {
            deq.pop_front();
        }
    }
    
    int front()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return deq.front();
        }
    }

    bool isEmpty()
    {
        return deq.empty();
    }
};

int main()
{
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.dequeue();

    while(!q.isEmpty())
    {
        cout<<q.front()<<" ";
        q.dequeue();
    }
    
    return 0;
}