#include <iostream>
using namespace std;

/*
    FRIEND CLASS

    - A friend class can access the private and protected
      members of another class.
    - We use the "friend" keyword to declare a class as a
      friend.
*/

class Student
{
private:
    int marks = 90;

    // Declaring Result as a friend class
    friend class Result;
};

// Friend class
class Result
{
public:

    // Function to access private member of Student
    void showMarks(Student obj)
    {
        // Friend class can access private data
        cout << "Marks: " << obj.marks << endl;
    }
};

int main()
{
    // Creating Student object
    Student s;

    // Creating Result object
    Result r;

    // Accessing private marks through friend class
    r.showMarks(s);

    return 0;
}