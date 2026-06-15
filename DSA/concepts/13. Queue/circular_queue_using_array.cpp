#include<iostream>
using namespace std;

class Queue
{
    int *arr;
    
    int capacity;
    int currSize;
    
    int front,rear;
    
    public :
    Queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;

        front = 0;
        rear = -1;
    }

    void enqueue(int data) // O(1)
    {
        if(currSize == capacity)
        {
            cout<<"Queue is Full !!"<<endl;
            return;
        }
        else
        {
            rear = (rear + 1) % capacity;
            arr[rear] = data;
            currSize++;
        }
    }

    void dequeue() // O(1)
    {
        if(empty())
        {
            cout<<"Queue is Empty !!"<<endl;
            return;
        }
        else
        {
            front = (front + 1) % capacity;
            currSize--;
        }
    }
    
    int frontElement() // O(1)
    {
        if(empty())
        {
            cout<<"Queue is Empty !!"<<endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    bool empty()
    {
        return currSize == 0;
    }
};

int main()
{
    Queue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);

    cout<<q.frontElement()<<endl;
    q.dequeue();
    cout<<q.frontElement()<<endl;
    q.dequeue();
    cout<<q.frontElement()<<endl;
    q.dequeue();
    cout<<q.frontElement()<<endl;
    q.dequeue();
    cout<<q.frontElement()<<endl;
    q.dequeue();
    return 0;
}