//CHAKING THE SIZE OF ARRAY.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,};
//     int lenght = sizeof(arr)/sizeof(int);
//     // int n= sizeof(arr);

//    cout<< sizeof(arr)/sizeof(int) <<endl;
//    return 0;
// }
//////////////////////////////////////////////////////////
//USING LOOP FOR COUT INDEX VALUE N MANY TIME .
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,12,34,56,78,90};
    // int length = sizeof(arr)/sizeof(int);
//     int idx=0;
//     cout<< sizeof(arr)/sizeof(int)<<" -is size of array ."<<endl;
//     for(idx=0;idx<length; idx++){
//         cout<<arr[idx]<<" ";
//     }
//     return 0;
// }
///////////////////////////////////////////////////////////
//TAKE INPUT IN ARRAY.
// #include<iostream>
// using namespace std;
// int main(){
    // int n;
    // cout<<"enetr the lenght off array :";
    // cin>>n;
    // int arr[n];
    // cout<<"enter your choosing number -";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<",";
    // }
//     cout<<endl;
//     return 0;

// }
////////////////////////////////////////////////////////////////////
//FIND LARZEST AND SMALLEST VALUE IN ARRAY  (length=n)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     int max = arr[0];
    
//     for(int i= 0;i<n;i++){
//         if(arr[i]>max){;
//         max = arr[i];
//         cout<<"assigning value is "<<arr[i]<<endl;
//         }
//     }
//     cout<<"max===  "<<max<<endl;

/////////////////////////////////////////////////
//     // for minimum value.
//     for(int i= 0;i<n;i++){
//         if(arr[i]<max){;
//         max = arr[i];
//         cout<<"assigning value is "<<arr[i]<<endl;
//         }
//     }
//     cout<<"min===  "<<max<<endl;
//     return 0;
// }
////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,3,4,5,6,};
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//         cout<<i<<" ";
//     }
//     return 0;
// }
//////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,34,56,13,134,243};
//     cout<<*(arr)<<endl;
//     cout<<*(arr+1)<<endl;     //this is equal to arr[1]
//     cout<<*(arr+2)<<endl;     //this is equal to arr[2]
//     cout<<*(arr+3)<<endl;     //this is equal to arr[3]
//     return 0;
// }
/////////////////////////////////////////////////////////////////////
//LINEAR SEARCH 
// #include<iostream>
// using namespace std;
// int linearsearch(int *arr,int n,int key){
//     for(int i=0;i<=n;i++){
//         if(arr[i]==key){
//             return i;
//         }
        
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"enetr the lenght off array :";
//     cin>>n;
//     int arr[n];
//     cout<<"enter your choosing number -";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
//     int k;
//     cout<<"enter the key number:";
//     cin>>k;
//     cout<<linearsearch(arr,n,k)<<endl;
//     return 0;
// }
/////////////////////////////////////////////////////////
//reverse in array with take extra space.
// #include<iostream>
// using namespace std;
// void printarray(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     int copyarray[n];                         //this line for create a new copy array.

//     for(int i=0;i<n;i++){             //this block for first array to copy second array.
//         int j=n-i-1;
//         copyarray[i]=arr[j];
//     }
    
//     for(int i=0;i<n;i++){               //this block for copy array to original array.
//         arr[i]=copyarray[i];
//     }
//     printarray(arr,n) ;  
    
//     return 0;
// }
//////////////////////////////////////////////
//reverse in array with out take any  extra space.
// #include<iostream>
// using namespace std;
// void printarray(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
//     cout<<endl;
// }
// int main(){
//    int  arr[5]={1,2,3,4,5};
//    int n =sizeof(arr)/sizeof(int);
//    int st=0,end=n-1,temp;
//    while(st<end){
//     swap(arr[st],arr[end]);       //isse bhi swap lar skte hain.

//     // temp=arr[st];
//     // arr[st]=arr[end];
//     // arr[end]=temp;
     
//     st++;
//     end--;
    
//    }
//    printarray(arr,n);
//    return 0;  
// }
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

// Binary Search Function
int binarySearch(int *arr, int n, int key) {
    int st = 0, end = n - 1;
    while (st <= end) {               // 1. Condition must be st <= end (not st <= n)
        int mid = st + (end - st) / 2; // Prevents potential integer overflow
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            st = mid + 1;             // Move start to mid + 1
        } else {
            end = mid - 1;            // 2. Move end to mid - 1 (was st = mid - 1)
        }
    }
    return -1;                        // Key not found
}

int main() {
    int arr[5] = {2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    
    int key = 3;
    int result = binarySearch(arr, n, key);
    
    if (result != -1) {
        cout << "Key " << key << " found at index: " << result << endl;
    } else {
        cout << "Key " << key << " not found." << endl;
    }
    
    return 0;
}
