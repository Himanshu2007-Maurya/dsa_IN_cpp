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

    // Constructor
    LinkedList() {

        // Initially list is empty
        head = NULL;
    }

    void showHead() {

        cout << "Head: " << head << endl;
    }
};

int main() {

    LinkedList list;

    list.showHead();

    return 0;
}