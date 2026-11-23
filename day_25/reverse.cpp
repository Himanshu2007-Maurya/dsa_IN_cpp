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

    /* ==================== YOUR LOGIC (FIXED) ==================== */
    void reverse(){
        Node *curr = head;
        Node *prev = NULL;
        while(curr != NULL){
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next; // Fixed: Now the loop advances instead of running infinitely
        }
        head = prev;
    }
};

int main()
{
    LinkedList ll;

    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    
    cout << "Before reverse: ";
    ll.print(); // Output: 40->30->20->10->NULL
    
    ll.reverse();
    
    cout << "After reverse:  ";
    ll.print(); // Output: 10->20->30->40->NULL

    return 0;
}
