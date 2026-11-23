#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next; 
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class List{
public:
    Node *head;
    Node *tail;
    List(){
        head = NULL;
        tail = NULL;
    }
    void printList(){
        Node *temp = head;
        while (temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    void push_front(int val){
        Node *newNode = new Node(val);
        // Node *newNode(val);
        if(head==NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
            
    }
    void pop_front(int val){
        Node *newNode = new Node(val);
        if(head==NULL){
            head = tail = NULL;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
            

    }
};
bool iscycle(Node* head){
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL&&fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            cout << "cycle is exist." << endl;
            return true;
        }
    }
    cout << "cycle is not exist." << endl;
    return false;
}
int main (){
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next = ll.tail;
    iscycle(ll.head);
    // ll.printList();
}