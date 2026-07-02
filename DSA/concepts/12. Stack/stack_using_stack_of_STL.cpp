#include<iostream>
using namespace std;

// Templated Node Class
template<class T>
class Node {
    public:
    T data;         // Changed from int to T
    Node<T> *next;  // Node now requires the <T> type specifier
    
    Node(T val)     // Changed from int to T
    {
        data = val;
        next = NULL;
    }
};

// Templated Stack Class
template<class T>
class Stack {
    public:
    Node<T> *head;  // Specifying Node<T> instead of just Node

    Stack()
    {
        head = NULL;
    }

    void push(T val) // Changed from int to T
    {
        Node<T> *newNode = new Node<T>(val);
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
        if(head == NULL)
        {
            cout << "Stack is Empty" << endl;   
        }
        else
        {
            Node<T> *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    // Changed return type to T to make it a proper "top" method,
    // though keeping your console print logic intact.
    void top()
    {
        if(head == NULL)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << head->data << endl;
        }
    }
};

int main()
{
    // You must now specify the data type <int> when creating the stack
    Stack<int> s;

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
    cout << endl;
    
    return 0;
}