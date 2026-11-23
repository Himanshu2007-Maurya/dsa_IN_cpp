#include <iostream>
#include <stack> // Required header file

using namespace std;

// Approach 1: Recursive Method (Elegant, uses the system call stack)
void pushAtBottomRecursive(stack<int>& st, int x) {
    // Base case: If the stack is empty, push the new element
    if (st.empty()) {
        st.push(x);
        return;
    }

    // Hold the top element and remove it
    int topElement = st.top();
    st.pop();

    // Recursively handle the remaining stack
    pushAtBottomRecursive(st, x);

    // Push the held element back on top
    st.push(topElement);
}

// Approach 2: Iterative Method (Uses a temporary helper stack)
void pushAtBottomIterative(stack<int>& st, int x) {
    stack<int> tempStack;

    // Move all elements from the original stack to the temporary stack
    while (!st.empty()) {
        tempStack.push(st.top());
        st.pop();
    }

    // Push the new element into the now-empty original stack (bottom)
    st.push(x);

    // Pour all elements back from the temporary stack
    while (!tempStack.empty()) {
        st.push(tempStack.top());
        tempStack.pop();
    }
}

// Helper function to print stack elements from top to bottom
void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << "Original Stack (Top to Bottom): ";
    printStack(s1);

    // Testing Recursive Approach
    int elementToInsert = 5;
    pushAtBottomRecursive(s1, elementToInsert);
    cout << "After pushing " << elementToInsert << " at bottom (Recursive): ";
    printStack(s1);

    // Testing Iterative Approach
    int anotherElement = 1;
    pushAtBottomIterative(s1, anotherElement);
    cout << "After pushing " << anotherElement << " at bottom (Iterative): ";
    printStack(s1);

    return 0;
}
