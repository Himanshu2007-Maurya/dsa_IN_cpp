#include<iostream>
using namespace std;
bool isSorted(int arr[],int n ,int i){
    //base case
    if(i==n-1){
        return true;
    }
    
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr, n, i+1);// recursive call to the function
}
int main (){
    int arr[] = {1, 2, 4, 3, 5};
    
    cout<<isSorted(arr,5,0)<<endl;
    
    return 0;
}