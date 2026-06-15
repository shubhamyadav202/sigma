#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 1 || n == 0)
    {
        return n;
    }

    int fib_prev = 0;
    int fib_curr = 1;
    int total_sum = fib_prev + fib_curr;

    for(int i = 2; i <= n;i++)
    {
        int fib_next = fib_prev + fib_curr;
        total_sum = total_sum + fib_next;
        
        fib_prev = fib_curr;
        fib_curr = fib_next;
    }

    return total_sum;
}

int main()
{
    cout<<fibonacci(5);
    return 0;
}