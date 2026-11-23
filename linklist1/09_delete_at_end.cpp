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

    void deleteAtEnd() {

        // Empty list
        if (head == NULL) {

            cout << "List empty!" << endl;

            return;
        }

        // Only one node
        if (head->next == NULL) {

            delete head;

            head = NULL;

            return;
        }

        // Start from head
        Node* temp = head;

        // Reach second-last node
        while (temp->next->next != NULL) {

            temp = temp->next;
        }

        // Delete last node
        delete temp->next;

        // Second-last becomes last
        temp->next = NULL;
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

    list.deleteAtEnd();

    cout << "After deletion: ";
    list.display();

    return 0;
}