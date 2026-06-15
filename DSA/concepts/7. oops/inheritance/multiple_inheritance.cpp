#include<iostream>
using namespace std;

class Parent{
    public:
    int salary;
    string subject;
};

class Student{
    public:
    int rollno;
    float cgpa;
};

class Ta : public Parent , public Student{
    public:
    string name;
};

int main()
{
    Ta t1;
    t1.name = "Bankuu Yadav";
    t1.subject = "C++";
    t1.cgpa = 9.2;

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.cgpa<<endl;
    return 0;
}