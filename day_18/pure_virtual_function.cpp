#include <iostream>
using namespace std;

/*
    PURE VIRTUAL FUNCTION

    A pure virtual function is a virtual function
    that has no implementation in the base class.

    Syntax:
        virtual void sound() = 0;

    " = 0 " makes the function PURE VIRTUAL.

    A class containing at least one pure virtual function
    is called an ABSTRACT CLASS.

    We cannot create an object of an abstract class.
*/

// Abstract Base Class
class Animal
{
public:

    // Pure virtual function
    virtual void sound() = 0;
};

// Derived / Child class
class Dog : public Animal
{
public:

    // Implementing the pure virtual function
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    // Creating object of Dog class
    Dog dog;

    // Calling the implemented function
    dog.sound();

    return 0;
}