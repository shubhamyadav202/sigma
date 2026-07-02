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

    void insertPosition(int val,int position)
    {
        Node *newNode = new Node(val);

        Node *temp = head;
        for(int i=0;i<position - 1;i++)
        {
            if(temp == NULL)
            {
                cout<<"Position is Invalid"<<endl;
                return;
            }
            temp = temp->next;
        }

        //temp is now at position - 1 i.e at the previous node after which we have to add a new node
        newNode->next = temp->next;
        temp->next = newNode; 
    }

    void pop_front()
    {
        if(head == NULL)
        {
            cout<<"Linked list is Empty"<<endl;
            return;
        }
        else
        {
            Node *temp = head;
    
            head = head->next;
    
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
        delete tail;
        tail = temp;
    }

    int search(int key) // O(n)
    {
        Node *temp = head;
        int idx = 0;
        
        while(temp != NULL)
        {
            if(temp->data == key)
            {
                return idx;
            }
            else
            {
                temp = temp->next;
                idx++;
            }
        }

        return -1;
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
    
    // ll.pop_front();
    // ll.printList(); // 2->3->4->5->NULL
    
    // ll.pop_back();
    // ll.printList(); // 2->3->4->NULL

    cout<<ll.search(5)<<endl;
    return 0;
}