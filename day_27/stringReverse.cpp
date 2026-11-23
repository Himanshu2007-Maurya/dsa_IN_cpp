#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverse(string str) {
    string ans;
    stack<char> s;
    
    for (int i = 0; i < str.size(); i++) {
        s.push(str[i]);
    }
    
    while (!s.empty()) {
        char top = s.top();
        ans += top;
        s.pop();
    }
    
    return ans; // Fixed: Return the reversed string
}

int main() {
    string input = "abcd"; // Renamed from 'stack' to avoid shadowing std::stack
    cout << "reverse of the string: " << reverse(input) << endl;
    return 0;
}