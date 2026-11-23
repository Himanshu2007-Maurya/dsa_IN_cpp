#include <iostream>
using namespace std;

class Node {
public: 
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
    // ~Node(){
    //     if(next!=NULL){
    //         cout << "node distructor fo data:" << data << endl;
    //         delete next;
    //         next = NULL;
    //     }
    // }
};

class LinkedList {
    Node *head;
    Node *tail;

public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    // ~LinkedList(){
    //     cout << "distructor call list.\n";
    //     if(head!=NULL){
    //         delete head;
    //         head = NULL;
    //     }
    // }
   
    
    void push_front(int val){
        Node *newNode = new Node(val); 

        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = head; 
            head = newNode;
        }
    }
    
    void push_back(int val){
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    void print(){
        Node *temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    /* ==================== YOUR LOGIC (FIXED) ==================== */
    void insert(int val, int pos){
        Node *newNode = new Node(val);
        
        // 1. FIXED: Initialize temp to head so it points to valid memory
        Node *temp = head; 
        
        // 2. YOUR LOOP: Moves temp step-by-step to the insertion point
        for (int i = 0; i <= pos - 1; i++){
            // Optional Safety: Check if temp becomes NULL to prevent crashing
            if (temp == NULL) {
                cout << "Invalid position\n";
                return;
            }
            // If we are at the target position, break out to perform the insertion
            if (i == pos - 1) {
                break;
            }
            temp = temp->next;
        }

        // 3. FIXED: Moved your linking step OUTSIDE the loop so it only runs once
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void pop_front(){
        if(head==NULL){
            cout << "linkdList is alrady empty.";
            return;
        }
        Node *temp = head;
        head=head->next;
        temp->next = NULL;
        delete temp;
    }
       void pop_back(){
        // Case 1: List is completely empty
        if (head == NULL) {
            cout << "LinkedList is already empty.\n";
            return;
        }
        
        // Case 2: List contains only one single node
        if (head->next == NULL) {
            delete head;
            head = tail = NULL;
            return;
        }

        // Case 3: List has multiple nodes
        Node *temp = head;
        // Move until temp points to the SECOND-TO-LAST node
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        
        // Actions happen ONCE, outside the loop:
        delete tail;        // Delete the last node safely
        tail = temp;        // Make the second-to-last node the new tail
        tail->next = NULL;  // Disconnect it from the deleted node
    }

};

/* ==================== MAIN EXECUTION BLOCK ==================== */
int main(){
    LinkedList ll; 
    
    // Block 1: Building initial front nodes
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    cout << "Initial list: ";
    ll.print(); // Output: 40->30->20->10->NULL

    // Block 2: Appending back nodes
    ll.push_back(10);
    ll.push_back(20);
    cout << "After push_back: ";
    ll.print(); // Output: 40->30->20->10->10->20->NULL

    // Block 3: Running your insert logic at position 3
    ll.insert(90, 3);
    cout << "After inserting 90 at position 3: ";
    ll.print(); // Output: 40->30->20->90->10->10->20->NULL

    // ll.pop_front();
    // cout << "print the value after pop front:";
    // ll.print();
    ll.pop_back();
    cout << "print the value after pop back:";
    ll.print();

    return 0;          
}  