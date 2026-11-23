#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printlist(){
    list<int>::iterator itr;
    list<int> ll;

    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(3); // Swapped to keep order 1->2->3->4
    ll.push_back(4);
    
    // 1. Print original list
    cout << "Original List: ";
    for (itr = ll.begin(); itr != ll.end(); itr++){
        cout << *itr << "->";
    }
    cout << "NULL" << endl;
    
    cout << "Size of the linked list: " << ll.size() << endl;
    cout << "Head value: " << ll.front() << endl;
    cout << "Tail value: " << ll.back() << endl;
    
    // 2. Apply pop functions
    cout << "\n--- After using pop functions ---" << endl;
    ll.pop_front(); // Removes 1
    ll.pop_back();  // Removes 4
    
    // 3. Print the list AGAIN to see the changes
    cout << "Updated List: ";
    for (itr = ll.begin(); itr != ll.end(); itr++){
        cout << *itr << "->";
    }
    cout << "NULL" << endl;
    
    cout << "New Size of the linked list: " << ll.size() << endl;
}

int main(){
    printlist();
    return 0;
}

