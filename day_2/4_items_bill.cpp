// Question 4: Calculate Total Cost of 3 Items

#include <iostream>
using namespace std;

int main()
{
    // Variables to store the cost of each item
    float pencil;
    float pen;
    float eraser;

    // Take cost of pencil
    cout << "Enter cost of pencil: ";
    cin >> pencil;

    // Take cost of pen
    cout << "Enter cost of pen: ";
    cin >> pen;

    // Take cost of eraser
    cout << "Enter cost of eraser: ";
    cin >> eraser;

    // Calculate total cost
    float total = pencil + pen + eraser;

    // Print the bill
    cout << "Total cost = " << total << endl;

    return 0;
}