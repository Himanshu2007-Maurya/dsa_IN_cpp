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

    void deleteAtBeginning() {

        // Check if list is empty
        if (head == NULL) {

            cout << "List empty!" << endl;

            return;
        }

        // Store old head
        Node* temp = head;

        // Move head to next node
        head = head->next;

        // Delete old head
        delete temp;
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

    cout << "Before deletion: ";
    list.display();

    list.deleteAtBeginning();

    cout << "After deletion: ";
    list.display();

    return 0;
}