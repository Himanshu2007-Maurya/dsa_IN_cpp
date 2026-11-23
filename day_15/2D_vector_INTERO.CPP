#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> matrix={{1,2},{3,4},{5,6}}; //vector inisialization
    vector<vector<int>> matrix={{1,2,3},{3,4},{5}} ; //you can also initialize vector like this, unequal size of rows
    for(int i=0;i<matrix.size();i++){   //outer loop for rows
        for(int j=0;j<matrix[i].size();j++){  //inner loop for columns
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}