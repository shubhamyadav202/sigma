#include<iostream>
using namespace std;

// Class to represent a Complex Number (like 1 + 2i)
class Complex{
    int real;        // Real part of complex number
    int imaginary;   // Imaginary part of complex number

public:
    // Constructor to initialize the object with given values
    Complex(int real,int imaginary)
    {
        // 'this' pointer refers to current object
        this->real = real;             
        this->imaginary = imaginary;   
    }

    // Function to display the complex number in proper format
    void showNum()
    {
        cout << real << " + " << imaginary << "i \n";
    }

    // Operator Overloading for '+' operator
    // Logic: Add corresponding parts of two complex numbers
    Complex operator + (Complex &c2)
    {
        // Current object → c1 (this)
        // Parameter object → c2

        // Step 1: Add real parts
        int resultReal = this->real + c2.real;

        // Step 2: Add imaginary parts
        int resultImaginary = this->imaginary + c2.imaginary;

        // Step 3: Create a new object with the result values
        Complex c3(resultReal,resultImaginary);

        // Step 4: Return the new object
        // This allows further use like: Complex c3 = c1 + c2;
        return c3;
    }
};

int main()
{
    // Step 1: Create two complex numbers
    Complex c1(1,2);   // Represents 1 + 2i
    Complex c2(3,9);   // Represents 3 + 9i
    
    // Step 2: Display original numbers
    c1.showNum();
    c2.showNum();

    // Step 3: Add both objects using overloaded '+' operator
    // Internally: c1.operator+(c2)
    Complex c3 = c1 + c2;

    // Step 4: Display result
    c3.showNum();

    return 0;
}