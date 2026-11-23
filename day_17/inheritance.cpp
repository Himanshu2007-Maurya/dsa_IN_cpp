#include <iostream>
using namespace std;

// ===============================
// BASE CLASS
// ===============================
class Animal
{
public:
    // Public member
    string color;

    // Public function
    void eat()
    {
        cout << "Animal eats" << endl;
    }

protected:
    // Protected member
    int age;

    // Protected function
    void breath()
    {
        cout << "Animal breathes" << endl;
    }

private:
    // Private member
    int weight;

    // Private function
    void sleep()
    {
        cout << "Animal sleeps" << endl;
    }
};


// =====================================================
// 1. PUBLIC INHERITANCE
// =====================================================
class FishPublic : public Animal
{
public:

    void swims()
    {
        cout << "Fish swims" << endl;

        // PUBLIC member of Animal
        // remains PUBLIC in FishPublic
        color = "Blue";

        // PROTECTED member of Animal
        // remains PROTECTED in FishPublic
        age = 2;

        // PRIVATE member of Animal
        // CANNOT be accessed
        // weight = 10;       // ERROR

        // Private function also cannot be accessed
        // sleep();           // ERROR

        // Protected function can be accessed
        breath();
    }
};


// =====================================================
// 2. PROTECTED INHERITANCE
// =====================================================
class FishProtected : protected Animal
{
public:

    void swims()
    {
        cout << "Fish swims" << endl;

        // PUBLIC member becomes PROTECTED
        color = "Red";

        // PROTECTED remains PROTECTED
        age = 3;

        // PRIVATE is NOT accessible
        // weight = 15;       // ERROR

        breath();
    }
};


// =====================================================
// 3. PRIVATE INHERITANCE
// =====================================================
class FishPrivate : private Animal
{
public:

    void swims()
    {
        cout << "Fish swims" << endl;

        // PUBLIC member becomes PRIVATE
        color = "Black";

        // PROTECTED member becomes PRIVATE
        age = 4;

        // PRIVATE member is NOT accessible
        // weight = 20;       // ERROR

        breath();
    }
};


// ===============================
// MAIN FUNCTION
// ===============================
int main()
{
    // ==========================================
    // PUBLIC INHERITANCE
    // ==========================================

    FishPublic f1;

    // Animal's public member remains PUBLIC
    f1.color = "Blue";

    // Animal's public function remains PUBLIC
    f1.eat();

    // Fish's public function
    f1.swims();

    cout << "Color: " << f1.color << endl;


    // ==========================================
    // PROTECTED INHERITANCE
    // ==========================================

    FishProtected f2;

    // This will give ERROR because
    // color became PROTECTED
    //
    // f2.color = "Red";       // ERROR

    // eat() also became PROTECTED
    //
    // f2.eat();               // ERROR

    // But Fish's own public function is accessible
    f2.swims();


    // ==========================================
    // PRIVATE INHERITANCE
    // ==========================================

    FishPrivate f3;

    // color became PRIVATE
    //
    // f3.color = "Black";     // ERROR

    // eat() also became PRIVATE
    //
    // f3.eat();               // ERROR

    // Fish's own public function is accessible
    f3.swims();


    return 0;
}