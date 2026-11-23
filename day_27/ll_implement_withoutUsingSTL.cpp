#include <iostream>
#include <string>
using namespace std;

template <class T>
class Node {
public:
    T data;
    Node* next;

    Node(T val) {
        data = val;
        next = nullptr;
    }
};

template <class T>
class stack {
public:
    Node<T>* head;
    
    stack() {
        head = nullptr;
    }
    
    void push(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
    
    T top() {
        if (isEmpty()) {
            return T(); // Returns default value like 0 or ""
        }
        return head->data;
    }
    
    bool isEmpty() {
        return head == nullptr;
    }
};

int main() {
    // 1. Separate Int Stack
    cout << "--- Integer Stack ---" << endl;
    stack<int> numStack;
    numStack.push(10);
    numStack.push(20);
    while (!numStack.isEmpty()) {
        cout << numStack.top() << " ";
        numStack.pop();
    }
    cout << "\n\n";

    // 2. Separate String Stack
    cout << "--- String Stack ---" << endl;
    stack<string> wordStack;
    wordStack.push("World");
    wordStack.push("Hello");
    while (!wordStack.isEmpty()) {
        cout << wordStack.top() << " ";
        wordStack.pop();
    }
    cout << endl;

    return 0;
}
