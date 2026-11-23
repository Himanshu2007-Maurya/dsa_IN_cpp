#include <iostream>
#include <string>
#include <stack>

using namespace std;

// Changed return type to bool to match the "return true" inside your logic
bool isDuplicate(string str) {
    stack<char> s;
    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];
        
        if (ch != ')') {
            s.push(ch); // Fixed: Passed 'ch' inside the push function
        } else {
            // Your Logic: If the immediate top element is '(', it's a duplicate!
            if (s.top() == '(') { // Fixed: Changed s.top to s.top()
                return true;
            }
            
            // Your Logic Completed: Pop all operators/operands until we hit the matching '('
            while (!s.empty() && s.top() != '(') {
                s.pop();
            }
            
            // Pop the opening parenthesis '(' itself to clean up the stack
            if (!s.empty()) {
                s.pop();
            }
        }
    }
    return false; // Return false if no duplicates are found
}

int main() {
    string str1 = "((a+b))";
    string str2 = "((a+b)+(c+d))";

    cout << "String 1: " << (isDuplicate(str1) ? "Has Duplicate" : "No Duplicate") << endl;
    cout << "String 2: " << (isDuplicate(str2) ? "Has Duplicate" : "No Duplicate") << endl;

    return 0;
}
