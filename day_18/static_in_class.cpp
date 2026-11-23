#include <iostream>
using namespace std;

/*
    STATIC VARIABLE IN CLASS

    - Static variable belongs to the class, not to one object.
    - Only ONE copy is created for the whole class.
    - All objects share the same static variable.
    - Its value is shared between all objects.
*/

class Counter
{
public:

    // Static variable
    // One common copy for all objects
    static int count;

    // Function to increase and display count
    void counter()
    {
        // Increase count by 1
        count++;

        // Display count
        cout << "Count: " << count << endl;
    }
};

// Initialize static variable outside the class
int Counter::count = 0;

int main()
{
    // Creating first object
    Counter obj1;

    // Creating second object
    Counter obj2;

    // Calling function using obj1
    obj1.counter();

    // Calling function using obj2
    obj2.counter();

    // Calling function using obj1 again
    obj1.counter();

    return 0;
}