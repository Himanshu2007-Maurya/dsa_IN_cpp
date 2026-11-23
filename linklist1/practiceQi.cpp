#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Helper function to merge two sorted segments
void merge(string arr[], int si, int mid, int ei) {
    vector<string> temp;
    int i = si;
    int j = mid + 1;

    // Compare and pick elements from both halves
    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    // Collect remaining elements
    while (i <= mid) {
        temp.push_back(arr[i++]);
    }
    while (j <= ei) {
        temp.push_back(arr[j++]);
    }

    // Copy sorted elements back into the original array
    for (int idx = 0; idx < temp.size(); idx++) {
        arr[si + idx] = temp[idx];
    }
}

// Main recursive Merge Sort function
void mergeSort(string arr[], int si, int ei) {
    // Base case
    if (si >= ei) {
        return;
    }

    int mid = si + (ei - si) / 2;

    // Recursive calls
    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);

    // Merge the sorted halves
    merge(arr, si, mid, ei);
}

int main() {
    string arr[] = {"sun", "earth", "mars", "mercury"};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    // Print output
    cout << "arr = { ";
    for (int i = 0; i < n; i++) {
        cout << "\"" << arr[i] << "\"";
        if (i < n - 1) cout << ", ";
    }
    cout << " }" << endl;

    return 0;
}
