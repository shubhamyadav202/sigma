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
    public:
    Node *head;
    Node *tail;

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

    bool isCycle(Node *head)
    {
        Node *slow = head;
        Node *fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                cout<<"Cycle exists"<<endl;
                return true;
            }
        }

        cout<<"Cycle doesn't Exists"<<endl;
        return false;

    }

    void removeCycle(Node *head)
    {
        //Detect cycle
        Node *slow = head;
        Node *fast = head;
        bool isCycle = false;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                cout<<"Cycle Exists"<<endl;
                isCycle = true;
                break;
            }
        }
        if(isCycle != true)
        {
            cout<<"Cycle Doesn't Exists"<<endl;
        }

        //Remove the Cycle
        Node *prev; 
        slow = head;
        if(slow == head) // Special case : tail -> head
        {
            while(fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL; // remove cycle
        }
        else
        {
            while(slow != fast)
            {
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = NULL; // remove cycle
        }

    }

};

int main()
{
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1); 
    ll.tail->next = ll.head;
    
    ll.removeCycle(ll.head);
    ll.printList();
    
    return 0;
}