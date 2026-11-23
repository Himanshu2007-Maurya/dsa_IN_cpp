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

    // Constructor
    LinkedList() {

        head = NULL;
    }

    // Destructor
    ~LinkedList() {

        Node* current = head;

        while (current != NULL) {

            Node* next = current->next;

            delete current;

            current = next;
        }

        cout << "All nodes deleted." << endl;
    }

    void insertAtEnd(int value) {

        Node* newNode = new Node();

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {

            head = newNode;

            return;
        }

        Node* temp = head;

        while (temp->next != NULL) {

            temp = temp->next;
        }

        temp->next = newNode;
    }
};

int main() {

    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    return 0;

    // Destructor automatically runs here
}