#include <iostream>
using namespace std;

/*
    ABSTRACTION

    Abstraction means hiding unnecessary implementation details
    and showing only the important information to the user.

    In C++, abstraction can be achieved using an ABSTRACT CLASS.

    An abstract class contains at least one PURE VIRTUAL FUNCTION.

    Syntax:
        virtual void function() = 0;
*/

// Abstract / Base class
class Animal
{
public:

    // Pure virtual function
    virtual void sound() = 0;
};

// Child / Derived class
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

    // Calling the function
    dog.sound();

    return 0;
}