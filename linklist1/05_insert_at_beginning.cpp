#include <iostream>
using namespace std;

struct Node {

    int data;
    Node* next;
};

class LinkedList {

private:

    Node* head;

public:

    LinkedList() {

        head = NULL;
    }

    void insertAtBeginning(int value) {

        // Create new node
        Node* newNode = new Node();

        // Store value
        newNode->data = value;

        // New node points to current head
        newNode->next = head;

        // New node becomes head
        head = newNode;
    }

    void display() {

        Node* temp = head;

        while (temp != NULL) {

            cout << temp->data << " -> ";

            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {

    LinkedList list;

    list.insertAtBeginning(30);
    list.insertAtBeginning(20);
    list.insertAtBeginning(10);

    list.display();

    return 0;
}