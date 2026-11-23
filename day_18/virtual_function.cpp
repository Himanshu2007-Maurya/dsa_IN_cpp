#include <iostream>
using namespace std;

/*
    VIRTUAL FUNCTION

    A virtual function is a member function of a base class
    that can be redefined (overridden) in a derived class.

    Syntax:
        virtual void hello();

    KEYWORD:
        "virtual" is used in the base class.

    IMPORTANT PROPERTIES:
    1. Virtual functions support runtime polymorphism.
    2. They are declared using the "virtual" keyword in the base class.
    3. The derived class can override the virtual function.
    4. The function is selected/called at runtime.
*/

// Base / Parent class
class Parent
{
public:

    // Virtual function
    virtual void hello()
    {
        cout << "Hello from Parent class" << endl;
    }
};

// Derived / Child class
class Child : public Parent
{
public:

    // Redefining / overriding the virtual function
    void hello() override
    {
        cout << "Hello from Child class" << endl;
    }
};

int main()
{
    // Creating object of Child class
    Child child;

    // Base class pointer
    Parent *ptr;

    // Pointer points to Child object
    ptr = &child;

    /*
        Because hello() is virtual,
        the Child class version is called at runtime.

        This is called RUNTIME POLYMORPHISM.
    */
    ptr->hello();

    return 0;
}