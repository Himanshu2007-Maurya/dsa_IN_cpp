#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class LinkedList
{
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void reverse(){
        Node *curr = head;
        Node *prev = NULL;
        while(curr != NULL){
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next; 
        }
        head = prev;
    }

    /* ==================== PLACED DIRECTLY ABOVE REMOVE NTH ==================== */
    int getSize() {
        int count = 0;
        Node *temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    /* ==================== YOUR REMOVE NTH LOGIC ==================== */
    void removeNth(int n){
        int size = getSize(); // Calls the size function right above

        // Safety check to ensure target exists
        if (n <= 0 || n > size || head == NULL) {
            cout << "Invalid position!\n";
            return;
        }

        // Special Case: Removing the first node from the head (if size - n == 0)
        if (size == n) {
            Node *toDel = head;
            head = head->next;
            cout << "going to delete:" << toDel->data << endl;
            delete toDel;
            return;
        }

        Node *prev = head;
        // Loop runs using (size - n) as specified in your logic
        for (int i = 1; i < (size - n); i++){
            prev = prev->next;
        }

        Node *toDel = prev->next;
        cout << "going to delete:" << toDel->data << endl; // Fixed to print node data value
        
        prev->next = prev->next->next;
        delete toDel; // Safely deletes the node from dynamic memory heap
    }
};

int main()
{
    LinkedList ll;

    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    
    cout << "Original List: ";
    ll.print(); // Output: 40->30->20->10->NULL
    
    ll.reverse();
    cout << "After reverse: ";
    ll.print(); // Output: 10->20->30->40->NULL

    // Index targets elements counting backwards from the end (1st=40, 2nd=30, 3rd=20...)
    cout << "\nRemoving 2nd node from the end:\n";
    ll.removeNth(2); 
    
    cout << "Final List:    ";
    ll.print(); // Output: 10->20->40->NULL

    return 0;
}
