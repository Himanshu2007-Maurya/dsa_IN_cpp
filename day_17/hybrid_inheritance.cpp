#include <iostream>
using namespace std;

// =================================
// Base Class: Animal
// =================================
class Animal
{
public:

    void eat()
    {
        cout << "Animal eats" << endl;
    }
};


// =================================
// Derived Class 1: Mammal
// Hierarchical Inheritance
// =================================
class Mammal : public Animal
{
public:

    void walk()
    {
        cout << "Mammal walks" << endl;
    }
};


// =================================
// Derived Class 2: Bird
// Hierarchical Inheritance
// =================================
class Bird : public Animal
{
public:

    void fly()
    {
        cout << "Bird flies" << endl;
    }
};


// =================================
// Dog inherits Mammal
// Multilevel Inheritance
// =================================
class Dog : public Mammal
{
public:

    void bark()
    {
        cout << "Dog barks" << endl;
    }
};


// =================================
// Main Function
// =================================
int main()
{
    // Creating Dog object
    Dog d;

    // Animal function
    d.eat();

    // Mammal function
    d.walk();

    // Dog's own function
    d.bark();


    // Creating Bird object
    Bird b;

    // Animal function
    b.eat();

    // Bird's own function
    b.fly();

    return 0;
}