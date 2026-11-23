#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int getMaxArea(const vector<int>& heights) {
    int n = heights.size();
    vector<int> lsr(n), nsr(n);
    stack<int> s; // This stack stores indices of the bars

    // STEP 1: Find LSR (First smaller bar on the left)
    for (int i = 0; i < n; i++) {
        // Kick out all taller or equal bars because they cannot limit the left boundary
        while (!s.empty() && heights[s.top()] >= heights[i]) {
            s.pop();
        }
        // If stack is empty, nothing is smaller on the left (-1)
        // Otherwise, the top of the stack is our LSR boundary
        lsr[i] = s.empty() ? -1 : s.top();
        
        s.push(i); // Put current bar index into the stack
    }

    // Clear stack to reuse it for the right side
    while (!s.empty()) s.pop();

    // STEP 2: Find NSR (First smaller bar on the right)
    for (int i = n - 1; i >= 0; i--) {
        // Kick out all taller or equal bars because they cannot limit the right boundary
        while (!s.empty() && heights[s.top()] >= heights[i]) {
            s.pop();
        }
        // If stack is empty, nothing is smaller on the right (boundary is n)
        // Otherwise, the top of the stack is our NSR boundary
        nsr[i] = s.empty() ? n : s.top();
        
        s.push(i); // Put current bar index into the stack
    }

    // STEP 3: Find the biggest rectangle area
    int maxArea = 0;
    for (int i = 0; i < n; i++) {
        int width = nsr[i] - lsr[i] - 1;
        int area = heights[i] * width;
        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3}; 
    cout << "Maximum histogram area: " << getMaxArea(heights) << endl;
    return 0;
}

