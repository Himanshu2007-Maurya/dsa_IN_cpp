#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// BUG 1 FIXED: Pass vectors by reference (&) so modifications reflect inside the function
void nextGreaterElement(const vector<int>& arr, vector<int>& ans) {
    stack<int> s;
    int idx = arr.size() - 1;
    
    // BUG 2 FIXED: Push the very last element into the stack first 
    // before the loop starts processing elements from right-to-left
    ans[idx] = -1;
    s.push(arr[idx]); 

    for (idx = idx - 1; idx >= 0; idx--) {
        int curr = arr[idx];
        while (!s.empty() && curr >= s.top()) {
            s.pop();
        }
        if (s.empty()) {
            ans[idx] = -1;
        } else {
            ans[idx] = s.top();
        }
        s.push(curr);
    }
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ",";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans = {0, 0, 0, 0, 0};
    nextGreaterElement(arr, ans);
    return 0;
}
