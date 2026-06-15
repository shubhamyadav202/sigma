#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyList{
    public:
    Node *head; 
    Node *tail;

    DoublyList()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front()
    {
        Node *temp = head;
        head = head->next;

        if(head != NULL)
        {
            head->prev = NULL;
        }
        else{
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back()
    {
        Node *temp = head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        temp->prev = NULL;
        delete tail;
        tail = temp;
    }

    void printArray()
    {
        Node *temp = head;

        while(temp != NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    DoublyList dbll;

    dbll.push_front(5);
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);

    dbll.push_back(6);
    dbll.push_back(7);

    // dbll.pop_front();
    dbll.pop_back();

    dbll.printArray();

    return 0;
}