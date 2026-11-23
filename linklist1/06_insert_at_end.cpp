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

    void insertAtEnd(int value) {

        // Create new node
        Node* newNode = new Node();

        newNode->data = value;
        newNode->next = NULL;

        // If list is empty
        if (head == NULL) {

            head = newNode;

            return;
        }

        // Start from head
        Node* temp = head;

        // Go to last node
        while (temp->next != NULL) {

            temp = temp->next;
        }

        // Connect last node with new node
        temp->next = newNode;
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

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    list.display();

    return 0;
}