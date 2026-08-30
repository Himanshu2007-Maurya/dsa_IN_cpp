#include <iostream>
using namespace std;

int main()
{
    // Variables to store marks
    float marks1, marks2, marks3, marks4, marks5;

    // Taking marks from the user
    cout << "Enter marks of 5 subjects: " << endl;

    cin >> marks1;
    cin >> marks2;
    cin >> marks3;
    cin >> marks4;
    cin >> marks5;

    // Calculate average
    float average = (marks1 + marks2 + marks3 + marks4 + marks5) / 5;

    // Print average
    cout << "Average Marks = " << average << endl;

    return 0;
}