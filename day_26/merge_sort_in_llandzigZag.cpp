#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class list {
public:
    Node *head;
    Node *tail;
    
    list() {
        head = NULL;
        tail = NULL;
    }
    
    void push_front(int val) {
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }
    
    void push_back(int val) {
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    void printList() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

Node *merge(Node *left, Node* right) {
    list ans;
    Node *i = left;
    Node *j = right;
    
    while (i != NULL && j != NULL) {
        if (i->data <= j->data) {
            ans.push_back(i->data);
            i = i->next;
        } else {
            ans.push_back(j->data);
            j = j->next;
        }
    }

    while (i != NULL) {
        ans.push_back(i->data);
        i = i->next;
    }
    
    while (j != NULL) {
        ans.push_back(j->data);
        j = j->next;
    }
    
    return ans.head;
}

Node *splitAtMid(Node *head) {
    Node* slow = head;
    Node *fast = head;
    Node *prev = NULL;
    
    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    if (prev != NULL) {
        prev->next = NULL;
    }
    return slow;
}

Node* mergeSort(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    Node *righthead = splitAtMid(head);
    Node *left = mergeSort(head);
    Node *right = mergeSort(righthead);
    
    return merge(left, right);
}

Node* reverse(Node* head){
    Node *prev = NULL;
    Node *curr = head; // FIXED: Initialize curr to head, not NULL
    Node *next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* zigZagll(Node* head){ // FIXED: Changed void to Node*
    if (head == NULL || head->next == NULL) return head;

    Node *righthead = splitAtMid(head);
    Node *rightheadRev = reverse(righthead); // FIXED: Called reverse function
    
    Node *left = head;
    Node *right = rightheadRev;
    
    // We will track next nodes inside the loop
    Node *nextleft = NULL;
    Node *nextright = NULL;
    Node *tail = NULL;
    
    while(left != NULL && right != NULL){
        // FIXED: Save the next pointers inside the loop dynamically
        nextleft = left->next;
        nextright = right->next;
        
        left->next = right;
        right->next = nextleft;
        
        tail = right;
        left = nextleft;
        right = nextright;
    }
    if(right != NULL){
        tail->next = right;
    }
    return head;
}

int main() {
    list ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_back(1); // List is: 2->3->4->1->NULL
    
    cout << "Before Sorting: ";
    ll.printList();
    
    ll.head = mergeSort(ll.head);
    
    cout << "After Sorting:  ";
    ll.printList(); // Will show: 1->2->3->4->NULL
    
    ll.head = zigZagll(ll.head);
    
    cout << "After Zig-Zag:  ";
    ll.printList(); // FIXED: Removed ll.head argument, will show: 1->4->2->3->NULL

    return 0;
}

