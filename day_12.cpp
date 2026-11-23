// #include<iostream>
// using namespace std;
// void print_arr(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
//     cout<<endl;
// }

// void bubble_sort(int *arr,int n){
//     bool isswap=false;
//     for(int i=0;i<n-1;i++){//time complecity is 0(n^2).
//         for (int j=0;j<n-i-1;j++){
//             if(arr[j]<arr[j+1]){// if you want acending order just change their ">" wirh this comperision mark. 
//                 swap(arr[j],arr[j+1]);
//                 isswap=true;
//             }
//         }
//         if(!isswap){  //is swap==false;
//             //array is already sorted.
//             return;
//         }
//     }
//     print_arr(arr,n);//call print_arrr finction.
// }



// int main (){
//     int arr[]={5,4,1,3,2};
//     int n=sizeof(arr)/sizeof(int);
//     bubble_sort(arr,n);// call bubble_sort function.
//     return 0;
// }

// selection sorting algorthim
// #include <iostream>
// using namespace std;

// void print_arr(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
//     cout<<endl;
// }   
 
// void selection_sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int minidx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minidx]){
//                 minidx=j;
//             }
//         }
//         swap(arr[i],arr[minidx]);

//     }
//     print_arr(arr,n);
    
// }


// int main(){
//     int arr[]={5,4,1,3,2};
//     int n =sizeof(arr)/sizeof(int);
//     selection_sort(arr,n);
//     return 0;
// }

//insertion sorting algorthim
// #include<iostream>
// using namespace std;
// void print_arr(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
//     cout<<endl;
// }   
// void insertion_sort(int *arr,int n){
    
//     for(int i=1;i<n;i++){
//         int curr=arr[i];
//         int prev=i-1;
//         while(prev >=0 && arr[prev]>curr){
//             swap(arr[prev],arr[prev+1]);
//             prev--;
//         }
//         arr[prev+1]=curr;

//     }
//     print_arr(arr,n);
// }
// int main(){
//     int arr[]={5,4,1,3,2};
//     int n =sizeof(arr)/sizeof(int);
//     insertion_sort(arr,n);
//     return 0;
// }
// counting sort algorthim
// #include <iostream>
// #include <climits>
// using namespace std;

// void print_arr(int *arr, int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << ", ";
//     }
//     cout << endl;
// }

// void counting_sort(int *arr, int n) {
//     int minval = INT_MAX;
//     int maxval = INT_MIN;

//     // Step 1: Find min and max
//     for (int i = 0; i < n; i++) {
//         minval = min(minval, arr[i]);
//         maxval = max(maxval, arr[i]);
//     }

//     int range = maxval - minval + 1;
//     int freq[100000] = {0};   // enough size

//     // Step 2: Count frequency
//     for (int i = 0; i < n; i++) {
//         freq[arr[i] - minval]++;
//     }

//     // Step 3: Rebuild sorted array
//     int j = 0;
//     for (int i = 0; i < range; i++) {
//         while (freq[i] > 0) {
//             arr[j++] = i + minval;
//             freq[i]--;
//         }
//     }
// }

// int main() {
//     int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
//     int n = sizeof(arr) / sizeof(int);

//     counting_sort(arr, n);
//     print_arr(arr, n);

//     return 0;
// }
// for inbilt sort function in c++
