#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

template <class T>
class stack
{
public:
    list<T> ll;
    void push(T val)
    {
        ll.push_back(val);
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "ll is allready empty." << endl;
            return;
        }
        ll.pop_back();
    }
    T top()
    {
        if(isEmpty()){
            cout << "ll is already empty." << endl;
            return T(); // Changed from -1 to T() to support strings safely
        }
        return ll.back();
    }
    bool isEmpty()
    {
        return ll.size() == 0;
    }
};

int main()
{
    // ---- 1. INTEGER STACK ----
    cout << "--- Integer Stack ---" << endl;
    stack<int> s1;
    s1.push(4);
    s1.push(3);
    s1.push(2);
    s1.push(1);
    while (!s1.isEmpty())
    {
        cout << s1.top() << ",";
        s1.pop();
    }
    cout << "\n\n";

    // ---- 2. CHARACTER STACK ----
    cout << "--- Character Stack ---" << endl;
    stack<char> s2;
    s2.push('Z');
    s2.push('Y');
    s2.push('X');
    while (!s2.isEmpty())
    {
        cout << s2.top() << ",";
        s2.pop();
    }
    cout << "\n\n";

    // ---- 3. STRING STACK ----
    cout << "--- String Stack ---" << endl;
    stack<string> s3;
    s3.push("Three");
    s3.push("Two");
    s3.push("One");
    while (!s3.isEmpty())
    {
        cout << s3.top() << ",";
        s3.pop();
    }
    cout << endl;

    return 0;
}
