#include <iostream>
#include <string>

using namespace std;

// Holds one of the types supported by this stack without requiring C++17.
class MixedType
{
    enum ValueType
    {
        Integer,
        Double,
        Text
    } type;
    int intValue;
    double doubleValue;
    string stringValue;

public:
    MixedType() : type(Integer), intValue(0), doubleValue(0.0) {}
    MixedType(int value) : type(Integer), intValue(value), doubleValue(0.0) {}
    MixedType(double value) : type(Double), intValue(0), doubleValue(value) {}
    MixedType(const string &value) : type(Text), intValue(0), doubleValue(0.0), stringValue(value) {}
    MixedType(const char *value) : type(Text), intValue(0), doubleValue(0.0), stringValue(value) {}

    void print() const
    {
        if (type == Integer)
        {
            cout << intValue;
        }
        else if (type == Double)
        {
            cout << doubleValue;
        }
        else
        {
            cout << stringValue;
        }
    }
};

template <class T>
class Node
{
public:
    T data;
    Node *next;

    Node(T val)
    {
        data = val;
        next = nullptr;
    }
};

template <class T>
class stack
{
public:
    Node<T> *head;

    stack()
    {
        head = nullptr;
    }

    void push(T val)
    {
        Node<T> *newNode = new Node<T>(val);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        Node<T> *temp = head;
        head = head->next;
        delete temp;
    }

    T top()
    {
        if (isEmpty())
        {
            return T();
        }
        return head->data;
    }

    bool isEmpty()
    {
        return head == nullptr;
    }
};

int main()
{
    cout << "--- Mixed Data Type Stack ---" << endl;

    // Create a single stack that accepts int, double, and string values
    stack<MixedType> mixedStack;

    // Pushing different data types into the SAME stack
    mixedStack.push(10);      // Integer
    mixedStack.push(3.14159); // Double
    mixedStack.push("Hello"); // String
    mixedStack.push(42);      // Integer

    // Process and print elements from the single list
    while (!mixedStack.isEmpty())
    {
        mixedStack.top().print();
        cout << " -> ";
        mixedStack.pop();
    }
    cout << "NULL" << endl;

    return 0;
}
