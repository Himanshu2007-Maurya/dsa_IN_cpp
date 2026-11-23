// SPIRAL MATRIX
// #include<iostream>
// using namespace std;
// void spiralmatrix(int matrix[][4],int n,int m){
//     int srow=0;
//     int erow=n-1;
//     int scol=0;
//     int ecol=m-1;
//     while(srow<=erow && scol<=ecol){
//         for(int j=scol;j<=ecol;j++){
//             cout<<matrix[srow][j]<<" ";
//         }
//         for(int i=srow+1;i<=erow;i++){
//             cout<<matrix[i][ecol]<<" ";
//         }
//         for(int j=ecol-1;j>=scol;j--){
//             cout<<matrix[erow][j]<<" ";
//         }
//         for(int i=erow-1;i>=srow+1;i--){
//             cout<<matrix[i][scol]<<" ";
//         }
//         srow++;scol++;
//         erow--;ecol--;

//     }

// }
// int main (){
//     int matrix[4][4]={{1,2,3,4},
//                    {5,6,7,8},
//                    {9,10,11,12},
//                    {13,14,15,16}};
//     spiralmatrix (matrix,4,4);
//     return 0;
// }

// DIAGONAL SUM
//  #include<iostream>
//  using namespace std;
//  int diagonalSum(int matrix[][3], int n) {
//      int sum = 0;
//      for (int i = 0; i < n; i++) {
//          sum += matrix[i][i]; // Primary diagonal
//          if (i != n - i - 1) {
//              sum += matrix[i][n - i - 1]; // Secondary diagonal
//          }

//     }

//     return sum;
// }
// int main() {
//     // int matrix[4][4] = {{1, 2, 3, 4},
//     //                     {5, 6, 7, 8},
//     //                     {9, 10, 11, 12},
//     //                     {13, 14, 15, 16}};
//     //                     diagonalSum(matrix,4);
//     int matrix[3][3] = {{1, 2, 3},
//                         {4, 5, 6},
//                         {7, 8, 9}};
//     cout << "Diagonal Sum: " << diagonalSum(matrix,3) << endl;
//     return 0;
// }
// STAIRCASE SEARCH starting from top right corner
// #include<iostream>
// using namespace std;
// bool staircasesearch(int matrix[][4],int n,int m,int key){
//     int row=0;
//     int col=m-1;
//     while(row<n && col>=0){
//         if(matrix[row][col]==key){
//             cout<<"Element found at index ("<<row<<","<<col<<")"<<endl;
//             return true;
//         }
//         else if(matrix[row][col]>key){
//             col--;
//         }
//         else{
//             row++;
//         }
//     }
//     cout<<"Element not found"<<endl;
//     return false;
// }
// int main(){
//     int matrix[4][4]={{10,20,30,40},
//                       {15,25,35,45},
//                       {27,29,37,48},
//                       {32,33,39,50}};

//     staircasesearch(matrix,4,4,32);
//     return 0;
// }

// STAIRCASE SEARCH starting from bottom left corner
#include <iostream>
using namespace std;
bool staircasesearch(int matrix[][4], int n, int m, int key) {
  int row = n - 1;
  int col = 0;
  while (row >= 0 && col < m) {
    if (matrix[row][col] == key) {
      cout << "Element found at index (" << row << "," << col << ")" << endl;
      return true;
    } else if (matrix[row][col] > key) {
      row--;
    } else {
      col++;
    }
  }
  cout << "Element not found" << endl;
  return false;
}
int main() {
  int matrix[4][4] = {
      {10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};

  staircasesearch(matrix, 4, 4, 29);
  return 0;
}
