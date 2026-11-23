#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int si,int ei,int mid){
    vector<int> temp;
    int i=si;//left
    int j=mid+1;//right
    while(i<=mid&&j<=ei){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
        
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);

    }
    for(int idx=si,x=0;idx<=ei; idx++){//temp to original
        arr[idx]=temp[x++];
    }
}



void ms(int arr[],int si,int ei){
    if(si>=ei){
        return ;
    }
    int mid=si+(ei-si)/2;
    ms(arr,si,mid);
    ms(arr,mid+1,ei);
    merge(arr,si,ei,mid);

}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        
    
    cout<<endl;
}
int main(){
    int arr[8]={6,3,4,2,5,7,9,8};
    int n=8;
    ms(arr,0,n-1);
    printArr(arr,n);
    return 0;

    

}