#include<iostream>
#include<vector>
using namespace std;
int FirstOcurance(vector<int>arr,int i,int target){
    //base case
    if(i==arr.size()){
        return -1;
    }
    //work the function
    if(arr[i]==target){
        return i;
    }
    return FirstOcurance(arr,i+1,target);//recursive call to the function 
}
int main(){
    vector<int> arr={1,2,3,4,4,3,5,6};
    cout<<FirstOcurance(arr,0,3)<<endl;
    return 0;
}