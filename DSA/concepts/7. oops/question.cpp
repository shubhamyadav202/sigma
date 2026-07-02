/* Create a User class with properties : id(private),
username(public) & password(private).
Its id should be initialized in a parameterised constructor.
It should have a Getter and Setter for password.
*/

#include<iostream>
using namespace std;

class User{
    private:
    int id;
    string password;

    public:
    string username;

    User(int id)
    {
        this->id = id;
    }

    void setPassword(string password)
    {
        this->password = password;
    }

    string getPassword()
    {
        return password;
    }
};

int main()
{
    User user1(101);
    user1.username = "shubhamydv";
    user1.setPassword("Shubham202");
 
    cout<<user1.username<<endl;
    cout<<user1.getPassword()<<endl;
    return 0;
}