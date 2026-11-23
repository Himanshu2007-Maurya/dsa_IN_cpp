#include <iostream>
using namespace std;

// ===========================
// Base Class 1: Teacher
// ===========================
class Teacher
{
public:
    int salary;
    string subject;

    void showTeacher()
    {
        cout << "Salary: " << salary << endl;
        cout << "Subject: " << subject << endl;
    }
};


// ===========================
// Base Class 2: Student
// ===========================
class Student
{
public:
    int rollNo;
    float cgpa;

    void showStudent()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};


// ===========================
// Derived Class: TA
// TA inherits Teacher and Student
// ===========================
class TA : public Teacher, public Student
{
public:

    void display()
    {
        cout << "\n--- TA Details ---" << endl;

        // Accessing Teacher properties
        cout << "Salary: " << salary << endl;
        cout << "Subject: " << subject << endl;

        // Accessing Student properties
        cout << "Roll Number: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};


// ===========================
// Main Function
// ===========================
int main()
{
    // Creating object of TA
    TA ta;

    // Teacher class properties
    ta.salary = 25000;
    ta.subject = "C++";

    // Student class properties
    ta.rollNo = 101;
    ta.cgpa = 8.5;

    // Calling functions
    ta.showTeacher();
    ta.showStudent();

    // Display all details
    ta.display();

    return 0;
}