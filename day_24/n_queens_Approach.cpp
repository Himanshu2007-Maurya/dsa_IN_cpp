#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Standard safety check function
bool isSafe(int row, int col, const vector<string>& board, int n) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q') return false;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') return false;
    }
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') return false;
    }
    return true;
}

// Backtracking solver to get the first base board configuration
bool getFirstSolution(int row, int n, vector<string>& board) {
    if (row == n) return true;

    for (int col = 0; col < n; col++) {
        if (isSafe(row, col, board, n)) {
            board[row][col] = 'Q';
            if (getFirstSolution(row + 1, n, board)) return true;
            board[row][col] = '.'; // Backtrack
        }
    }
    return false;
}

// Function to print the board with clear cell spacing
void printBoard(const vector<string>& board, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    int n = 4; // Using a 4x4 board because smaller boards have no solutions
    vector<string> baseBoard(n, string(n, '.'));

    if (!getFirstSolution(0, n, baseBoard)) {
        cout << "No valid board layouts exist for a " << n << "x" << n << " board.\n";
        return 0;
    }

    cout << "--- 4 GEOMETRIC BOARD TYPES FOR N-QUEENS ---\n\n";

    // TYPE 1: Original Board Layout
    cout << "Type 1: Original Base Layout\n";
    printBoard(baseBoard, n);

    // TYPE 2: 90-Degree Rotated Board
    vector<string> rotated90(n, string(n, '.'));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated90[j][n - 1 - i] = baseBoard[i][j];
        }
    }
    cout << "Type 2: 90-Degree Rotated Board\n";
    printBoard(rotated90, n);

    // TYPE 3: Horizontal Mirror Board (Flipped Left-to-Right)
    vector<string> horizontalFlip(n, string(n, '.'));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            horizontalFlip[i][n - 1 - j] = baseBoard[i][j];
        }
    }
    cout << "Type 3: Horizontal Reflection Board\n";
    printBoard(horizontalFlip, n);

    // TYPE 4: Vertical Mirror Board (Flipped Top-to-Bottom)
    vector<string> verticalFlip(n, string(n, '.'));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            verticalFlip[n - 1 - i][j] = baseBoard[i][j];
        }
    }
    cout << "Type 4: Vertical Reflection Board\n";
    printBoard(verticalFlip, n);

    return 0;
}
