#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValidParenthesis(string str) {
    stack<char> s;
    
    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];
        
        // If it's an opening bracket, push it onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } 
        // If it's a closing bracket
        else {
            // If stack is empty when a closing bracket appears, it's invalid
            if (s.empty()) {
                return false;
            }
            
            char top = s.top();
            // Check if the current closing bracket matches the opening bracket on top
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                s.pop(); // Correct pair found, remove the opening bracket
            } else {
                return false; // Mismatched brackets (e.g., matching '}' with '(')
            }
        }
    }
    
    // The string is valid only if all opening brackets have been matched and popped
    return s.empty();
}

int main() {
    string string1 = "([}])";  // Invalid
    string string2 = "([{}])"; // Valid

    cout << "String 1 is: " << (isValidParenthesis(string1) ? "Valid" : "Invalid") << endl;
    cout << "String 2 is: " << (isValidParenthesis(string2) ? "Valid" : "Invalid") << endl;

    return 0;
}
