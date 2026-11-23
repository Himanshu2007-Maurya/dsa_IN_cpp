#include <iostream>
using namespace std;

/*
    FRIEND FUNCTION

    - A friend function is NOT a member of the class.
    - It is declared inside the class using the "friend" keyword.
    - It can access private and protected members of the class.
    - We call it like a normal function, not using an object.
*/

class Student
{
private:
    int marks = 90;

public:

    // Declaring showMarks() as a friend function
    friend void showMarks(Student obj);
};

// Friend function
void showMarks(Student obj)
{
    // Friend function can access private member
    cout << "Marks: " << obj.marks << endl;
}

int main()
{
    // Creating Student object
    Student s;

    // Calling friend function like a normal function
    showMarks(s);

    return 0;
}