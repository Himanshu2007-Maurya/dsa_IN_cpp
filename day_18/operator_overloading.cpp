#include <iostream>
using namespace std;

// Class for Complex Number
class Complex
{
    int real;
    int imag;

public:

    // Constructor
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    // Function to display complex number
    void show()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    // Overloading + operator
    Complex operator+(Complex obj)
    {
        // Add real parts
        int r = real + obj.real;

        // Add imaginary parts
        int i = imag + obj.imag;

        // Return new Complex object
        return Complex(r, i);
    }
};

int main()
{
    // Creating two complex numbers
    Complex C1(1, 2);
    Complex C2(3, 2);

    // Display first complex number
    C1.show();

    // Display second complex number
    C2.show();

    // Adding C1 and C2 using overloaded + operator
    Complex C3 = C1 + C2;

    // Display result
    C3.show();

    return 0;
}

/*Concept: This is compile-time polymorphism → Operator Overloading.

C3 = C1 + C2 internally calls:

C1.operator+(C2);
*/