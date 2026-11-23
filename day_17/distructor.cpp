#include <iostream>
using namespace std;

class Car
{
private:
    string name;
    string color;
    int *mileage;       // Pointer for dynamically allocated memory

public:

    // Constructor
    Car(string n, string c, int m)
    {
        name = n;
        color = c;

        // Dynamically allocating memory
        mileage = new int;

        // Storing mileage in allocated memory
        *mileage = m;

        cout << "Object created." << endl;
    }

    // Destructor
    ~Car()
    {
        cout << "Object deleted." << endl;

        // Checking whether mileage contains an address
        if (mileage != NULL)
        {
            // Releasing dynamically allocated memory
            delete mileage;

            // Making pointer NULL after deletion
            mileage = NULL;
        }
    }

    // Function to display car details
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Mileage: " << *mileage << endl;
    }
};

int main()
{
    // Creating Car object
    Car C1("BMW", "Black", 12);

    // Displaying car details
    C1.display();

    // Destructor is automatically called
    // when C1 goes out of scope

    return 0;
}