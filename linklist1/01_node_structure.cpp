#include <iostream>
using namespace std;

// Node structure
struct Node {

    // Stores data
    int data;

    // Stores address of next node
    Node* next;
};

int main() {

    // Create one Node variable
    Node node;

    // Store value
    node.data = 10;

    // Currently there is no next node
    node.next = NULL;

    // Print data
    cout << "Data: " << node.data << endl;

    // Check next
    cout << "Next: " << node.next << endl;

    return 0;
}