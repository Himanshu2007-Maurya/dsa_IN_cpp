//SELECTION SORTING
#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i =0; i<n-1;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int n= 6 ;
    int arr[]={11,23,45,67,54,1};
    
    selectionsort(arr,n);
    printarray(arr,n);
    return 0;


}
    
    

    
