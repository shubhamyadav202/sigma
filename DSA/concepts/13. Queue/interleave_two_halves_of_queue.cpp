#include<iostream>
#include<queue>
using namespace std;

void interleave(queue<int> &originalq)
{
    int n = originalq.size();
    queue<int> queueFirst; // Queue First

    for(int i = 0;i < n/2;i++)
    {
        queueFirst.push(originalq.front());
        originalq.pop();
    }

    while(!queueFirst.empty())
    {
        originalq.push(queueFirst.front());
        queueFirst.pop();

        originalq.push(originalq.front());
        originalq.pop();
    }
}

int main()
{
    queue<int> originalq; // Original Queue

    for(int i = 1;i <= 10 ; i++)
    {
        originalq.push(i);
    }
    
    interleave(originalq);
    
    for(int i = 1;i <= 10 ; i++)
    {
        cout<<originalq.front()<<" ";
        originalq.pop();
    }
    cout<<endl;
    return 0;
}