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

    void deleteAtPosition(int position) {

        // Empty list
        if (head == NULL) {

            cout << "List empty!" << endl;

            return;
        }

        // Invalid position
        if (position < 1) {

            cout << "Invalid position!" << endl;

            return;
        }

        // Position 1 means first node
        if (position == 1) {

            Node* temp = head;

            head = head->next;

            delete temp;

            return;
        }

        // Start from head
        Node* temp = head;

        // Move to node before target
        for (int i = 1;
             i < position - 1 && temp != NULL;
             i++) {

            temp = temp->next;
        }

        // Position does not exist
        if (temp == NULL || temp->next == NULL) {

            cout << "Position out of range!" << endl;

            return;
        }

        // Store node to delete
        Node* nodeToDelete = temp->next;

        // Skip target node
        temp->next = temp->next->next;

        // Delete target node
        delete nodeToDelete;
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
    list.insertAtEnd(40);
    list.insertAtEnd(50);

    cout << "Before deletion: ";
    list.display();

    int position;

    cout << "Enter position: ";
    cin >> position;

    list.deleteAtPosition(position);

    cout << "After deletion: ";
    list.display();

    return 0;
}