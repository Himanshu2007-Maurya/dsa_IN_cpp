
#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int data;       // Stores the data value
    Node* next;     // Pointer to the next node
};

class LinkedList {
private:
    Node* head;     // Head pointer points to first node

public:
    // Constructor initializes empty list
    LinkedList() {
        head = NULL; // List starts empty
    }

    // Destructor deallocates all nodes when list is destroyed
    ~LinkedList() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->next; // Store next node
            delete current;             // Delete current node
            current = next;            // Move to next node
        }
    }

    // Creates a sample list: 10 -> 20 -> 30 -> 40 -> 50
    void createSampleList() {
        insertAtEnd(10);
        insertAtEnd(20);
        insertAtEnd(30);
        insertAtEnd(40);
        insertAtEnd(50);
        cout << "Initial list created: 10 -> 20 -> 30 -> 40 -> 50\n";
    }

    // Helper function to insert at end (used for creating sample list)
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        
        if (head == NULL) {
            head = newNode; // If list empty, new node becomes head
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next; // Traverse to last node
            }
            temp->next = newNode; // Add new node at end
        }
    }

    /**************** DELETION OPERATIONS ****************/

    // Delete first node of the list
    void deleteAtBeginning() {
        if (head == NULL) {
            cout << "List empty! Nothing to delete.\n";
            return;
        }
        
        Node* temp = head;      // Store current head
        head = head->next;      // Move head to next node
        cout << "Deleted " << temp->data << " from beginning.\n";
        delete temp;            // Delete old head
        displayList();          // Show updated list
    }

    // Delete last node of the list
    void deleteAtEnd() {
        if (head == NULL) {
            cout << "List empty! Nothing to delete.\n";
            return;
        }
        
        // Special case: list has only one node
        if (head->next == NULL) {
            cout << "Deleted " << head->data << " from end.\n";
            delete head;
            head = NULL;
            displayList();
            return;
        }
        
        // Traverse to second last node
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        
        cout << "Deleted " << temp->next->data << " from end.\n";
        delete temp->next;    // Delete last node
        temp->next = NULL;    // Set new last node's next to NULL
        displayList();
    }

    // Delete node at specific position (1-based index)
    void deleteAtPosition(int position) {
        if (head == NULL) {
            cout << "List empty! Nothing to delete.\n";
            return;
        }
        
        if (position < 1) {
            cout << "Invalid position! Must be >= 1.\n";
            return;
        }
        
        // Special case: delete first node
        if (position == 1) {
            deleteAtBeginning();
            return;
        }
        
        // Traverse to node before target position
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        
        // Check if position is valid
        if (temp == NULL || temp->next == NULL) {
            cout << "Position out of range!\n";
            return;
        }
        
        Node* nodeToDelete = temp->next;       // Node to be deleted
        temp->next = temp->next->next;         // Bypass the node to delete
        cout << "Deleted " << nodeToDelete->data 
             << " from position " << position << ".\n";
        delete nodeToDelete;                   // Free memory
        displayList();
    }

    // Display current list state
    void displayList() {
        if (head == NULL) {
            cout << "List is now empty!\n";
            return;
        }
        
        cout << "Current List: ";
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data;
            if (temp->next != NULL) cout << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    
    // Phase 1: Create initial list
    list.createSampleList();
    
    // Phase 2: Deletion operations menu
    int choice, position;
    while (true) {
        cout << "\nDeletion Operations Menu:\n"
             << "1. Delete at beginning\n"
             << "2. Delete at end\n"
             << "3. Delete at position\n"
             << "4. Display list\n"
             << "5. Exit\n"
             << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: list.deleteAtBeginning(); break;
            case 2: list.deleteAtEnd(); break;
            case 3: 
                cout << "Enter position: ";
                cin >> position;
                list.deleteAtPosition(position);
                break;
            case 4: list.displayList(); break;
            case 5: 
                cout << "Program exited.\n";
                return 0;
            default: cout << "Invalid choice!\n";
        }
    }
}





