#include<iostream>
using namespace std;

int main()
{
    char ch = 'f';
    int position = ch - 'a';    

    cout<<position;

    char sentence[30];
    cin.getline(sentence,30);

    cout<<"Output :"<<sentence;
    return 0;
}