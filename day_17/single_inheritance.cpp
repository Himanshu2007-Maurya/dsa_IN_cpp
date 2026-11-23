#include <iostream>
using namespace std;

// Base class
class Animal
{
public:

    // Function of Animal class
    void eat()
    {
        cout << "Animal eats" << endl;
    }

    // Another function of Animal class
    void breathe()
    {
        cout << "Animal breathes" << endl;
    }
};


// Derived class
// Fish inherits Animal
class Fish : public Animal
{
public:

    // Function of Fish class
    void swim()
    {
        cout << "Fish swims" << endl;
    }
};


int main()
{
    // Creating object of Fish
    Fish f;

    // Calling Animal's function
    f.eat();

    // Calling Animal's function
    f.breathe();

    // Calling Fish's own function
    f.swim();

    return 0;
}