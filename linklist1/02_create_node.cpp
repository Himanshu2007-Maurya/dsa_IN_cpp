#include <iostream>
using namespace std;

struct Node {

    int data;
    Node* next;
};

int main() {

    // Create a node dynamically
    Node* newNode = new Node();

    // Put data into node
    newNode->data = 10;

    // No next node
    newNode->next = NULL;

    // Print data
    cout << "Data: " << newNode->data << endl;

    // Delete dynamically created node
    delete newNode;

    return 0;
}