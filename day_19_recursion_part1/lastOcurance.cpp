#include<iostream>
#include<vector>
using namespace std;
int lastOcurance(vector<int>arr,int i,int target){
    //base case
    if(i==arr.size()){
        return -1;
    }
    int idxFound=lastOcurance(arr,i+1,target);
    if (idxFound==-1&&arr[i]==target){
        return i;
    }
    return idxFound;
}
   


    


int main(){
    vector<int> arr={1,2,3,4,4,5,5,6,7,7,8};
    cout<<lastOcurance(arr,0,5);
    return 0;
}
