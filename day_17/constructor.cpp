// #include <iostream>
// using namespace std;

// // Class
// class Student {

// private:
//     string name;   // Private data member
//     float cgpa;    // Private data member

// public:

//     // Constructor
//     // Constructor has the same name as the class
//     // It is automatically called when an object is created
//     Student(string n, float c) {
//         name = n;
//         cgpa = c;
//     }

//     // Function to display student information
//     void display() {
//         cout << "Student Name: " << name << endl;
//         cout << "Student CGPA: " << cgpa << endl;
//     }
// };

// int main() {

//     // Object creation
//     // Constructor is automatically called here
//     Student s1("Himanshu", 8.5);

//     // Calling the member function
//     s1.display();

//     return 0;
// }
////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Student {

private:
    // Private data members
    string name;
    float cgpa;

public:

    // Constructor
    // It initializes the values of name and cgpa
    Student(string n, float c) {
        name = n;
        cgpa = c;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Getter for CGPA
    float getCgpa() {
        return cgpa;
    }
};

int main() {

    // Creating object and initializing values using constructor
    Student s1("Himanshu", 8.5);

    // Getting values using getters
    cout << "Student Name: " << s1.getName() << endl;
    cout << "Student CGPA: " << s1.getCgpa() << endl;

    return 0;
}