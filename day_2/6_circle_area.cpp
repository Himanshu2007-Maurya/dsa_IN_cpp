// Question 6: Area of a Circle

#include <iostream>
using namespace std;

int main()
{
    // Variable to store radius
    float r;

    // Take radius as input
    cout << "Enter radius of circle: ";
    cin >> r;

    // Calculate area
    // Formula: PI * r * r
    float area = 3.14 * r * r;

    // Print the area
    cout << "Area of circle = " << area << endl;

    return 0;
}