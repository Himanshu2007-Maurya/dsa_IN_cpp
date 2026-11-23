#include <iostream>
using namespace std;

class Node {
public: // Made public so LinkedList can access 'next' and 'data'
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList {
    Node *head;
    Node *tail;

public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    
    void push_front(int val){
        // Correctly allocating a new node dynamically on the heap
        Node *newNode = new Node(val); 

        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = head; // Fixed typo (removed the underscore)
            head = newNode;
        }
    }
    void push_back(int val){
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }else{
                tail->next = newNode;
                tail = newNode;
            }

        
    }
    void print(){
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->data<<"->";//print temp data
            temp=temp->next;// temp updation for each node
        }
        cout << "NULL\n";
    }
};

int main(){
    LinkedList ll; 
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    ll.print();

    ll.push_back(10);
    ll.push_back(20);
    ll.print();
    return 0;          
}
