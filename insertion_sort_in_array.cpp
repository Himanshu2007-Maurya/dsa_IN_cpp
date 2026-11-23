#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
                prev--;
            
        }
        arr[prev+1]=curr;
    }
    printarray(arr,n);
}
int main(){
    int n;
    
    cout<<"enter the size off array :";
    cin>>n;
    int arr[n];
    for(int idx=0;idx<n;idx++){
        cin>>arr[idx];
    }
    for(int idx =0;idx<n;idx++){
        
    }
    insertionsort(arr,n);
    return 0;
}