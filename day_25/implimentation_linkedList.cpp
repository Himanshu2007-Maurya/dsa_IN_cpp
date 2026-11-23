#include <iostream>
using namespace std;

class Node {

    int data;
    Node *next;
public:

    Node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList {
    Node *head;
    Node *tail;

public: // Fixed lowercase 'p'
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
};

int main(){
    LinkedList myList; // Avoids conflict and instantiates the object properly
    return 0;          // Fixed typo 'retun'
}
