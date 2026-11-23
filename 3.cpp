#include <iostream>
using namespace std;

// Define the structure for a node in the linked list
struct Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list
};

// Class to handle linked list operations
class LinkedList {
private:
    Node* head;     // Pointer to the first node in the list

public:
    // Constructor to initialize an empty list
    LinkedList() {
        head = NULL; // Initially, the list is empty, so head points to NULL
    }

    // Destructor to free allocated memory
    ~LinkedList() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->next;
            delete current;  // Free memory for each node
            current = next;
        }
    }

    // Function to insert a new node at the beginning of the list
    void insertAtBeginning(int value) {
        // Create a new node
        Node* newNode = new Node();
        newNode->data = value;  // Set the data for the new node
        
        // The new node's next should point to the current head
        newNode->next = head;
        
        // Now, update the head to point to the new node
        head = newNode;
        
        cout << "Inserted " << value << " at the beginning." << endl;
    }

    // Function to insert a new node at the end of the list
    void insertAtEnd(int value) {
        // Create a new node
        Node* newNode = new Node();
        newNode->data = value;  // Set the data for the new node
        newNode->next = NULL;    // Since it's the last node, next should be NULL
        
        // If the list is empty, make the new node the head
        if (head == NULL) {
            head = newNode;
        } else {
            // Traverse to the last node
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            // Make the last node's next point to the new node
            temp->next = newNode;
        }
        
        cout << "Inserted " << value << " at the end." << endl;
    }

    // Function to insert a new node at a specific position
    void insertAtPosition(int value, int position) {
        // Check if the position is valid (must be >= 1)
        if (position < 1) {
            cout << "Invalid position! Position should be >= 1." << endl;
            return;
        }
        
        // If position is 1, it's the same as inserting at the beginning
        if (position == 1) {
            insertAtBeginning(value);
            return;
        }
        
        // Create a new node
        Node* newNode = new Node();
        newNode->data = value;
        
        // Traverse to the node just before the desired position
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        
        // If we reached the end before reaching the desired position
        if (temp == NULL) {
            cout << "Position is out of range!" << endl;
            delete newNode; // Clean up the unused node
            return;
        }
        
        // Insert the new node
        newNode->next = temp->next; // New node points to what the previous node was pointing to
        temp->next = newNode;      // Previous node now points to the new node
        
        cout << "Inserted " << value << " at position " << position << "." << endl;
    }

    // Function to display the linked list
    void display() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        
        cout << "Linked List: ";
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
    int choice, value, position;
    
    while (true) {
        cout << "\nLinked List Operations:" << endl;
        cout << "1. Insert at beginning" << endl;
        cout << "2. Insert at end" << endl;
        cout << "3. Insert at position" << endl;
        cout << "4. Display list" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertAtBeginning(value);
                break;
            case 2:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertAtEnd(value);
                break;
            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position: ";
                cin >> position;
                list.insertAtPosition(value, position);
                break;
            case 4:
                list.display();
                break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    
    return 0;
}
