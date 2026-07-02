#include<iostream>
using namespace std;

class Student{
    //Properties
public: // sirf name public haii
    string name;
private: // iske niche jitne bhi functions,variables hai sb private hojaenge
    float cgpa;

    //Methods
    void getPercentage(){
        cout<< (cgpa * 10) <<"\n";
    }
};

int main()
{
    Student s1; //object
    s1.name = "shubham";
    s1.cgpa = 9.0;
    s1.getPercentage();
    cout<<s1.name<<" "<<s1.cgpa;
    
    return 0;
}