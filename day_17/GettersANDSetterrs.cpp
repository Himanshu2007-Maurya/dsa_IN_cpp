#include <iostream>
using namespace std;

class Student {
private:
    string name;
    float cgpa;

public:
    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for CGPA
    void setCgpa(float c) {
        cgpa = c;
    }

    // Getter for CGPA
    float getCgpa() {
        return cgpa;
    }
};

int main() {
    Student s;

    // Using setters
    s.setName("Himanshu");
    s.setCgpa(8.5);

    // Using getters
    cout << "Student Name: " << s.getName() << endl;
    cout << "Student CGPA: " << s.getCgpa() << endl;

    return 0;
}