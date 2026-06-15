#include<iostream>
#include<list>
using namespace std;

template<class T>
class Stack{

    list<T> ll;

    public :
        void push(T val)
        {
            ll.push_front(val);
        }
        
        T pop()
        {
            if(isEmpty())
            {
                cout<<"Stack is Empty"<<endl;
                return -1;
            }
            ll.pop_front();
        }

        T top()
        {
            if(isEmpty())
            {
                cout<<"Stack is Empty"<<endl;
                return -1;
            }
            return ll.front();
        }

        bool isEmpty()
        {
            return ll.size() == 0;
        }
};

int main()
{
    Stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
    return 0;
}