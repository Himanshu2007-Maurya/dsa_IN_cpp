#include <iostream>  // Includes the standard input-output library (needed for printing to the screen)
using namespace std; // Allows us to use standard names (like cout) directly without typing 'std::' every time

// Define a blueprint for a single element in our list called a Node
class Node {
public:             // Access specifier: makes the variables inside it accessible by other classes (like LinkedList)
    int data;       // Stores the integer value of this specific node
    Node *next;     // A pointer that will hold the memory address of the next Node in the list

    // A constructor function to initialize a new Node whenever one is created
    Node(int val){
        data = val;  // Sets the node's data to the value passed into the constructor
        next = NULL; // Sets the next pointer to NULL because a new node doesn't point to anything yet
    }
}; // Semi-colon ends the class definition

// Define a blueprint for the managing system of our list
class LinkedList {
    Node *head; // Private pointer tracking the very first node in the list
    Node *tail; // Private pointer tracking the very last node in the list

public: // Access specifier: allows the main function to call these methods
    // A constructor function to set up an empty list
    LinkedList(){
        head = NULL; // Initializes head to NULL because the list starts completely empty
        tail = NULL; // Initializes tail to NULL because the list starts completely empty
    }
    
    // A function to add a new value to the absolute front of the list
    void push_front(int val){
        // 'new' allocates memory on the heap so the node stays alive even after this function ends.
        // It creates a new Node object and returns its memory location to our 'newNode' pointer.
        Node *newNode = new Node(val); 

        // Check if the list is currently empty
        if(head == NULL){
            // If empty, this new node is simultaneously both the start (head) and end (tail) of the list
            head = tail = newNode;
        } else {
            // If not empty, point our new node's next pointer to the current first node (head)
            newNode->next = head; 
            // Move the head pointer to our new node, making it the official new first node
            head = newNode;
        }
    }
}; // Semi-colon ends the class definition

// The starting point of execution for the C++ program
int main(){
    LinkedList myList; // Instantiates an object of our LinkedList class named 'myList'
    
    myList.push_front(10); // Adds a node containing the number 10 to the front of the list
    myList.push_front(20); // Adds a node containing the number 20 to the front (list is now 20 -> 10)
    
    return 0; // Signals to the operating system that the program finished successfully without errors
}
