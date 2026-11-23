#include <iostream>
using namespace std;

// =================================
// Base Class
// =================================
class Animal
{
public:

    // Common function for all animals
    void eat()
    {
        cout << "Animal eats" << endl;
    }

    void breathe()
    {
        cout << "Animal breathes" << endl;
    }
};


// =================================
// Derived Class 1: Bird
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
// Derived Class 2: Fish
// =================================
class Fish : public Animal
{
public:

    void swim()
    {
        cout << "Fish swims" << endl;
    }
};


// =================================
// Derived Class 3: Mammal
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
// Main Function
// =================================
int main()
{
    // Creating Bird object
    Bird b;

    cout << "Bird:" << endl;
    b.eat();        // Inherited from Animal
    b.breathe();    // Inherited from Animal
    b.fly();        // Bird's own function


    cout << "\nFish:" << endl;

    // Creating Fish object
    Fish f;

    f.eat();        // Inherited from Animal
    f.breathe();    // Inherited from Animal
    f.swim();       // Fish's own function


    cout << "\nMammal:" << endl;

    // Creating Mammal object
    Mammal m;

    m.eat();        // Inherited from Animal
    m.breathe();    // Inherited from Animal
    m.walk();       // Mammal's own function

    return 0;
}