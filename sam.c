#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes using int return types instead of void
int acceptMarks(float arr[], int *n);
int bubbleSortAscending(float arr[], int n);
int insertionSortDescending(float arr[], int n);
int selectionSortAscending(float arr[], int n);
int displayMarks(float arr[], int n);
int displayTopAndBottom(float arr[], int n, int isAscending);

int main() {
    float marks[MAX_SIZE];
    int n = 0;
    int choice;
    int isSorted = 0;
    int lastSortAscending = 1; // 1 for ascending, 0 for descending

    do {
        printf("\n==========================================");
        printf("\n       STUDENT MARKS MANAGEMENT SYSTEM    ");
        printf("\n==========================================");
        printf("\n1. Accept Marks of N Students");
        printf("\n2. Sort Marks (Ascending - Bubble Sort)");
        printf("\n3. Sort Marks (Descending - Insertion Sort)");
        printf("\n4. Sort Marks (Ascending - Selection Sort)");
        printf("\n5. Display Highest 5 & Lowest 5 Marks");
        printf("\n6. Display Current Sorted List");
        printf("\n7. Exit");
        printf("\n==========================================");
        printf("\nEnter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                acceptMarks(marks, &n);
                isSorted = 0;
                break;

            case 2:
                if (n == 0) {
                    printf("\n[!] Please enter marks first (Option 1).\n");
                } else {
                    bubbleSortAscending(marks, n);
                    isSorted = 1;
                    lastSortAscending = 1;
                    printf("\n[✓] Marks sorted in ascending order (Bubble Sort).\n");
                    displayMarks(marks, n);
                    displayTopAndBottom(marks, n, lastSortAscending);
                }
                break;

            case 3:
                if (n == 0) {
                    printf("\n[!] Please enter marks first (Option 1).\n");
                } else {
                    insertionSortDescending(marks, n);
                    isSorted = 1;
                    lastSortAscending = 0;
                    printf("\n[✓] Marks sorted in descending order (Insertion Sort).\n");
                    displayMarks(marks, n);
                    displayTopAndBottom(marks, n, lastSortAscending);
                }
                break;

            case 4:
                if (n == 0) {
                    printf("\n[!] Please enter marks first (Option 1).\n");
                } else {
                    selectionSortAscending(marks, n);
                    isSorted = 1;
                    lastSortAscending = 1;
                    printf("\n[✓] Marks sorted in ascending order (Selection Sort).\n");
                    displayMarks(marks, n);
                    displayTopAndBottom(marks, n, lastSortAscending);
                }
                break;

            case 5:
                if (n == 0) {
                    printf("\n[!] Please enter marks first (Option 1).\n");
                } else if (!isSorted) {
                    printf("\n[!] Please sort the list first (Options 2, 3, or 4).\n");
                } else {
                    displayTopAndBottom(marks, n, lastSortAscending);
                }
                break;

            case 6:
                if (n == 0) {
                    printf("\n[!] Please enter marks first (Option 1).\n");
                } else if (!isSorted) {
                    printf("\n[!] List is not sorted yet. Current list:\n");
                    displayMarks(marks, n);
                } else {
                    displayMarks(marks, n);
                }
                break;

            case 7:
                printf("\nExiting program. Goodbye!\n");
                break;

            default:
                printf("\n[!] Invalid choice! Please enter a number between 1 and 7.\n");
        }
    } while (choice != 7);

    return 0;
}

// Function to input student marks
int acceptMarks(float arr[], int *n) {
    printf("\nEnter number of students (1 to %d): ", MAX_SIZE);
    scanf("%d", n);

    if (*n <= 0 || *n > MAX_SIZE) {
        printf("[!] Invalid number of students. Must be between 1 and %d.\n", MAX_SIZE);
        *n = 0;
        return 0;
    }

    printf("Enter marks for %d students:\n", *n);
    for (int i = 0; i < *n; i++) {
        printf("  Student %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
    printf("[✓] Marks accepted successfully.\n");
    return 1;
}

// Option 2: Bubble Sort (Ascending)
int bubbleSortAscending(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 1;
}

// Option 3: Insertion Sort (Descending)
int insertionSortDescending(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    return 1;
}

// Option 4: Selection Sort (Ascending)
int selectionSortAscending(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        float temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
    return 1;
}

// Function to display array elements
int displayMarks(float arr[], int n) {
    printf("\nMarks List: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f  ", arr[i]);
    }
    printf("\n");
    return 1;
}

// Option 5: Display highest 5 and lowest 5 marks
int displayTopAndBottom(float arr[], int n, int isAscending) {
    int count = (n < 5) ? n : 5;

    printf("\n--- Extremes Summary (Top/Bottom %d) ---\n", count);
    
    if (isAscending) {
        printf("Lowest %d Marks : ", count);
        for (int i = 0; i < count; i++) {
            printf("%.2f  ", arr[i]);
        }
        printf("\nHighest %d Marks: ", count);
        for (int i = n - 1; i >= n - count; i--) {
            printf("%.2f  ", arr[i]);
        }
    } else {
        printf("Highest %d Marks: ", count);
        for (int i = 0; i < count; i++) {
            printf("%.2f  ", arr[i]);
        }
        printf("\nLowest %d Marks : ", count);
        for (int i = n - 1; i >= n - count; i--) {
            printf("%.2f  ", arr[i]);
        }
    }
    printf("\n");
    return 1;
}