#include <iostream>
using namespace std;

// Create a class named Car
class Car
{
public:
    // Properties (data members) of the car
    string brand;
    string color;
    int price;
    int speed;
    int modelYear;

    // Constructor
    // Constructor is automatically called when we create an object
    Car(string b, string c, int p, int s, int y)
    {
        // Store the given values in properties
        brand = b;
        color = c;
        price = p;
        speed = s;
        modelYear = y;
    }

    // Function to display car information
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Model Year: " << modelYear << endl;
    }
};

int main()
{
    // Create an object of Car class
    // Constructor will be called here
    Car car1("BMW", "Black", 5000000, 250, 2026);

    // Display car information
    car1.display();

    
    return 0;
}