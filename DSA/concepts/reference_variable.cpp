#include<iostream>
using namespace std;

void update(int &x) {
    x = 50;
}

int main()
{

    int a = 10;
    cout << a;   // Output: 10
    update(a);
    cout << a;   // Output: 50

    return 0;
}