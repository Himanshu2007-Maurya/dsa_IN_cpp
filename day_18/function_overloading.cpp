#include <iostream>
using namespace std;

// Parent class
class Parent
{
public:

    // Function of parent class
    void show()
    {
        cout << "Parent class show" << endl;
    }
};

// Child class inherits Parent
class Child : public Parent
{
public:

    // Function overriding
    // Same function name and same parameters
    void show()
    {
        cout << "Child class show" << endl;
    }
};

int main()
{
    // Creating object of Child class
    Child child;

    // Calls Child class show()
    child.show();

    return 0;
}