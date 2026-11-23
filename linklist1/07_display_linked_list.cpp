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

    void display() {

        Node* temp = head;

        while (temp != NULL) {

            cout << temp->data;

            if (temp->next != NULL) {

                cout << " -> ";
            }

            temp = temp->next;
        }

        cout << endl;
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
