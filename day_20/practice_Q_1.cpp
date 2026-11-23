/*Question 1 : Write a recursive function to perform Binary Search.
Input : arr[ ] = {1, 2, 3, 4, 5, 6, 7}, n = 7, key = 5
Output : 4 (index of key)
*Use the starting index & ending index logic used in rotated, sorted array Qs.*/
#include<iostream>
using namespace std;
int binarySearch(int arr[],int start,int end,int key){
    if(start>end){
        return -1;
    }
    int mid=start+(end-start)/2;//Integer overflow can occur if we use (start+end)/2 on the larze amount of number
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        return binarySearch(arr,start,mid-1,key);
    }else{
        return binarySearch(arr,mid+1,end,key);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,};
    cout<<binarySearch(arr,0,6,5)<<endl;
    return 0;
}
