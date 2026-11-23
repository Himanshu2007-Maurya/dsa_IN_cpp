#include <iostream>
using namespace std;

// Forward declaration of partition so QS knows it exists
int partition(int arr[], int si, int ei);

void QS(int arr[], int si, int ei) {
    if (si >= ei) {
        return;
    }
    // Fixed: Removed the accidental nested function block
    int pivotIdx = partition(arr, si, ei); 
    
    QS(arr, si, pivotIdx - 1);
    QS(arr, pivotIdx + 1, ei);
}

int partition(int arr[], int si, int ei) {
    int pivot = arr[ei];
    int i = si - 1;
    
    // Fixed: Removed the duplicate partition() function wrapper here
    for (int j = si; j < ei; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    // Fixed: Swap the pivot into its correct position
    swap(arr[i + 1], arr[ei]); 
    
    // Fixed: Return the actual pivot index
    return i + 1; 
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8] = {6, 3, 4, 2, 5, 7, 9, 8};
    int n = 8;
    
    QS(arr, 0, n - 1);
    printArr(arr, n);
    
    return 0;
}
