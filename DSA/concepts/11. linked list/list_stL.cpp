#include<iostream>
#include<list>
using namespace std;

void printList(list<int> ll)
{
    list<int>::iterator itr;
    
    for(itr = ll.begin();itr != ll.end();itr++)
    {
        cout<<*itr<<"->";
    }
    cout<<"NULL"<<endl;
}

int main()
{
    list<int> ll;   

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(4);
    ll.push_back(5);
    ll.pop_front();
    ll.pop_back();

    printList(ll);

    cout<<ll.size()<<endl;
    
    cout<<"head :"<<ll.front()<<endl;

    cout<<"tail :"<<ll.back()<<endl;
    return 0;
}