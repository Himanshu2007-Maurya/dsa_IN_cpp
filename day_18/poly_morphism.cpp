#include <iostream>   
#include <string>    
using namespace std;

// Class named Print
class Print
{
public:

    // Function show() for integer value
    void show(int x)
    {
        cout << "int: " << x << endl;
    }

    // Function show() for string value
    // Same function name but different parameter type
    void show(string str)
    {
        cout << "string: " << str << endl;
    }
};

int main()
{
    // Creating an object of Print class
    Print obj;

    // Calls show(int) because 25 is an integer
    obj.show(25);

    // Calls show(string) because "Himanshu" is a string
    obj.show("Himanshu");

    return 0;   
}