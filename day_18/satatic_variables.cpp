#include <iostream>
using namespace std;

/*
    STATIC LOCAL VARIABLE

    - count is declared inside the function.
    - It is initialized only once.
    - Its value is preserved between function calls.
    - It is not recreated every time the function is called.
*/

class Counter
{
public:

    // Function to increase and display count
    void counter()
    {
        // Static local variable
        static int count = 0;

        // Increase count by 1
        count++;

        // Display count
        cout << "Count: " << count << endl;
    }
};

int main()
{
    // Creating object
    Counter obj;

    // Calling counter() three times
    obj.counter();
    obj.counter();
    obj.counter();

    return 0;
}