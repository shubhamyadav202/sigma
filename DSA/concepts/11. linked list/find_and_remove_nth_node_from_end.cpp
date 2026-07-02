#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node *next;

    Node(int val) // Constructor
    {
        data = val;
        next = NULL;
    }

    ~Node() // Destructor , Used to delete the nodes inside the linked list
    { 
        // cout<<"~Node "<<data<<endl;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

class List{
    Node *head;
    Node *tail;

public:
    List() // Constructor
    {
        head = NULL;
        tail = NULL;
    }

    ~List() // Destructor , Used to delete the head
    {
        // cout<<"~List"<<endl;
        if(head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val); // dynamically node is created

        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
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
            tail = newNode;
        }
    }

    void printList()
    {
        Node *temp = head;

        while(temp != NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    int getSize()
    {
        int size = 0;
        Node *temp = head;

        while(temp != NULL)
        {
            temp = temp->next;
            size++;
        }

        return size;
    }

    void removeNth(int n)
    {
        int size = getSize();
        Node *prev = head;

        for(int i=1;i < (size-n);i++) // i=size-n => hum deletion wale node se pehele wale node pre rahenge
        {
            prev = prev->next;
        }
        Node *toDel = prev->next;
        cout<<"Going to delete :"<<toDel->data<<endl;
        prev->next = prev->next->next;
        
        toDel->next = NULL;
        delete toDel;
    }
};

int main()
{
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1); 
    ll.push_back(4);
    ll.push_back(5);
    
    ll.printList(); // 1->2->3->4->5->NULL
    
    ll.removeNth(2);
    ll.printList(); // 1->2->3->4->5->NULL
    return 0;
}