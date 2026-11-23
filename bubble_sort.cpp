#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }

}


void bubblesort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        cout<<endl;
    }
    printArray(arr,n);
}



int main(){
    // int arr[5]={45,12,43,65,23,};
    int n;
    
    cout<<"enter the size off array :";
    cin>>n;
    int arr[n];
    for(int idx=0;idx<n;idx++){
        cin>>arr[idx];
    }
    for(int idx =0;idx<n;idx++){
        
    }
    bubblesort(arr,n);
    
    return 0;
}