#include<iostream>
using namespace std;

// Class A
class A{
    private:
    string secret = "secret data";   // Private data (normally not accessible outside)

    // Declaring friend class → all members of B can access private data of A
    friend class B;

    // Declaring friend function → this function can also access private data
    friend void revealSecret(A &obj);
};

// Friend class
class B{
    public:
    void showSecret(A &obj)
    {
        // Accessing private member of A using friendship
        cout << obj.secret << endl;
    }
};

// Friend function
void revealSecret(A &obj)
{
    // Direct access to private member of A
    cout << obj.secret << endl;
}

int main()
{
    A a1;   // Object of class A
    B b1;   // Object of class B

    b1.showSecret(a1);     // Access via friend class
    revealSecret(a1);      // Access via friend function

    return 0;
}