// #include<iostream>
// using namespace std;
// void subarray(int *arr,int n){
//     for(int str=0;str<n;str++){
//         for(int end=str;end<n;end++){
//             for(int i=str;i<=end;i++){
//                 cout<<arr[i];
                
//             }
//             cout<<"," ; 
//         }
//         cout<<endl;
//     }
// }
// int main (){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     subarray(arr,n);
//     return 0;
// }

//time complexity: O(n^3)
//print max subarray

// #include<iostream>
// #include<climits>
// using namespace std;
// void maxsubarraysum(int *arr,int n){
//     int maxsum=INT_MIN;
//     for(int str=0;str<n;str++){
//         for(int end=str;end<n;end++){
//             int currsum=0;
//             for(int i=str;i<=end;i++){
//                 currsum+=arr[i];
                
//             }
//             cout<<currsum<<"," ; 
//             maxsum=max(maxsum,currsum);
//         }
//         cout<<endl;
//     }
//     cout<<"Maximum sum between subarrays:"<<maxsum;
// }
// int main (){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     maxsubarraysum(arr,n);
//     return 0;
// }
// optimizing of brute force approack there time complexity: O(n^2)
// #include<iostream>
// #include<climits>
// using namespace std;
// void maxsubarraysum(int *arr,int n){
//     int maxsum=INT_MIN;
//     for(int str=0;str<n;str++){
//         int currsum=0;
//         for(int end=str;end<n;end++){
//             currsum+=arr[end]; 
//             maxsum=max(maxsum,currsum);
//         }
//     }
//     cout<<"Maximum sum between subarrays:"<<maxsum;
// }
// int main (){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     maxsubarraysum(arr,n);
//     return 0;
// }
// Kadane's Algorithm time complexity : O(n)
// #include<iostream>
// #include<climits>
// using namespace std;
// void maxsubarraysum(int *arr,int n){
//     int maxsum=INT_MIN;
//     int currsum=0;
//     for(int i=0;i<n;i++){
//         currsum+=arr[i];
//         maxsum=max(maxsum,currsum);
//         if(currsum<0){
//             currsum=0;
//         }
//     }
//     cout<<"Maximum sum between subarrays:"<<maxsum;
// }
// int main (){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     maxsubarraysum(arr,n);
//     return 0;
// }

// BUY & sell stocks .
// #include<iostream>
// #include<climits>
// using namespace std;
// void maxprofit(int *prizes,int n){
//     int bestbuy[100000];
//     bestbuy[0]=INT_MAX;

//     for(int i=1;i<n;i++){
//         bestbuy[i]=min(bestbuy[i-1],prizes[i-1]);
//         cout<<<bestbuy[i]<<",";
//     }
//     cout<<endl;
//     int maxprofit=0;
//     for(int i=0;i<n;i++){
//         int currprofit=prizes[i]-bestbuy[i];
//         maxprofit=max(maxprofit,currprofit);

//     }
//     cout<<"maximum profit:"<<maxprofit<<endl;
//     //time complexcity=0(n).
// }
// int main(){
//     int prizes[6]={7,1,5,3,6,4};
//     int n = sizeof(prizes)/sizeof(int);
//     maxprofit(prizes,n);
//     return 0;
// }

//Water trapping
#include<iostream>
#include<climits>
using namespace std;
void trap(int *height,int n){
    int leftmax[20000],rightmax[20000];
    leftmax[0]=INT_MIN;
    rightmax[n-1]=INT_MIN;
   
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);
        
    }
    
    for(int i=n-2;i>=0;i--){
        leftmax[i]=max(rightmax[i+1],height[i+1]);
        cout<<rightmax[i]<<",";
    }
    cout<<rightmax[n-1];
    cout<<endl;
}
int main(){
    int height[7]={4,2,0,6,3,2,5};
    int n =sizeof(height)/sizeof(int);
    trap(height,n);

    return 0;
}