#include <iostream>
using namespace std;

// Create a class named Car
class Car
{
public:
    string brand;     // Store car brand
    int* price;       // Pointer to store price dynamically

    // Constructor
    Car(string b, int p)
    {
        brand = b;              // Store brand
        price = new int(p);     // Create new memory and store price
    }

    // Deep Copy Constructor
    Car(const Car &other)
    {
        brand = other.brand;          // Copy the brand

        // Create NEW memory for the copied object
        // This is the main part of Deep Copy
        price = new int(*other.price);
    }

    // Function to display car details
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << *price << endl;
    }

    // Destructor
    ~Car()
    {
        // Free the dynamically allocated memory
        delete price;
    }
};

int main()
{
    // Create first object
    Car car1("BMW", 5000000);

    // Create second object using car1
    // Deep Copy Constructor is called here
    Car car2 = car1;

    // Display first car
    cout << "Car 1:" << endl;
    car1.display();

    // Display copied car
    cout << "\nCar 2:" << endl;
    car2.display();

    return 0;
}