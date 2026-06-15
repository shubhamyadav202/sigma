#include<iostream>
#include<string>
using namespace std;

class Student{
private: 
    string name; 
    float cgpa;

public:
    void getPercentage(){
        cout<< (cgpa * 10) <<"\n";
    }

    //Setters :- Used to set the Values
    void setName(string nameValue)
    {
        name = nameValue;
    }

    void setCgpa(int cgpaValue)
    {
        cgpa = cgpaValue;
    }

    //Getters :- Used to get the Values
    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    Student s1; 

    s1.setName("shubham");  
    s1.setCgpa(9.0);

    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa();
    return 0;
}

