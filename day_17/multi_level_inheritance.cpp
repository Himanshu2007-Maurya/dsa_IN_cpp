#include <iostream>
using namespace std;

// ===========================
// Level 1: Base Class
// ===========================
class Animal
{
public:

    // Animal ka function
    void eat()
    {
        cout << "Animal eats" << endl;
    }
};


// ===========================
// Level 2: Derived Class
// ===========================
class Mammal : public Animal
{
public:

    // Mammal ka function
    void breathe()
    {
        cout << "Mammal breathes" << endl;
    }
};


// ===========================
// Level 3: Derived Class
// ===========================
class Dog : public Mammal
{
public:

    // Dog ka function
    void bark()
    {
        cout << "Dog barks" << endl;
    }
};


// ===========================
// Main Function
// ===========================
int main()
{
    // Dog ka object create karna
    Dog d;

    // Animal se inherited function
    d.eat();

    // Mammal se inherited function
    d.breathe();

    // Dog ka own function
    d.bark();

    return 0;
}