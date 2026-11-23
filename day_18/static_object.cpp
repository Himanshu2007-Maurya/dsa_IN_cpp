#include <iostream>
using namespace std;

/*
    STATIC OBJECT

    - A static object is created using the "static" keyword.
    - It is created only once.
    - It remains alive until the program ends.
    - Its destructor is called when the program ends.
*/

class Student
{
public:

    // Constructor
    Student()
    {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called" << endl;
    }

    // Function
    void show()
    {
        cout << "Student object is working" << endl;
    }
};

int main()
{
    cout << "Program started" << endl;

    // Creating a static object
    static Student obj;

    // Calling function using static object
    obj.show();

    cout << "Program ending" << endl;

    return 0;
}