#include<iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node *next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Stack{
    public:
    Node *head; 

    Stack()
    {
        head = NULL;
    }

    void push(int val)
    {
        // Push front
        Node *newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop()
    {
        // Pop front
        if(head == NULL)
        {
            cout<<"Stack is Empty"<<endl;   
        }
        else
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void top()
    {
        // Showing head->data because it is treated as Top of the Stack
        if(head == NULL)
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            cout<<head->data<<endl;
        }
    }
};

int main()
{
    Stack s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    while(s.head != NULL)
    {
        s.top();
        s.pop();
    }
    cout<<endl;
    return 0;
}