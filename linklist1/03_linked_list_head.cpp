#include <iostream>
using namespace std;

struct Node {

    int data;
    Node* next;
};

class LinkedList {

private:

    // Points to first node
    Node* head;

public:

    void showHead() {

        cout << "Head: " << head << endl;
    }
};

int main() {

    LinkedList list;

    list.showHead();

    return 0;
}