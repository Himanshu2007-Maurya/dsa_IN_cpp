#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionsort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    printArray(arr,n);
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
    selectionsort(arr,5);
    return 0;

}