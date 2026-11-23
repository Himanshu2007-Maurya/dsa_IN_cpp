#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class queue{
    Node *head;
    Node *tail;
public:
    queue(){
        head = tail = NULL;
    }
    
    // 1. Fixed the head/tail assignment here
    void push(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode; // Pehla node aane par dono wahan point karenge
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    void pop(){
        if(isempty()){
            cout << "queue is empty.\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    
    // 2. Added return head->data here
    int front(){
        if(isempty()){
            cout << "empty queue.\n";
            return -1;
        }
        return head->data; // Sabse aage wale node ka data return karo
    }
    
    bool isempty(){
        return head == NULL;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    while(!q.isempty()){
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
