// Question 5: Simple Interest Calculator

#include <iostream>
using namespace std;

int main()
{
    // Variables to store Principal, Rate and Time
    float P;
    float R;
    float T;

    // Take Principal amount as input
    cout << "Enter Principal (P): ";
    cin >> P;

    // Take Rate as input
    cout << "Enter Rate (R): ";
    cin >> R;

    // Take Time as input
    cout << "Enter Time (T): ";
    cin >> T;

    // Calculate Simple Interest
    float SI = (P * R * T) / 100;

    // Print Simple Interest
    cout << "Simple Interest = " << SI << endl;

    return 0;
}