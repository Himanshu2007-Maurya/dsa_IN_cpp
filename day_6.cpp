// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter your number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j =1;j<=n;j++){
//             cout<<i<<" ";
//         } 
//         cout<<endl;
//     }
//     return 0;
// }
///////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j =1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;   
// }
//////////////////////////////////////////////
//PRINT INVERTED STAR PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//     cout<<"enter your number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j =1;j<=n-i+1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;   
// }
///////////////////////////////////
//PRINT HALF PYRAMID PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j =1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;   
// }
///////////////////////////////////////////
//PRINT CHARACTOR PYRAMID PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     char ch ='A';
//     cout<<"enter your number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j =1;j<=i;j++){
//             cout<<ch<<" ";
//             ch = ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;   
// }
////////////////////////////////////////
//PRINT HALLOW RECTAINGlE PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<"*";           //for first column print
//         for(int j =1;j<=n-1;j++){
//             if(i==1||i==n){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             } 
//         }
        
//         cout<<"*"<<endl;
//     }
//     return 0;   
// }
//////////////////////////////////////////
//INVERTED & ROTED HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your numb4er is :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j= 1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
///////////////////////////////////////////////////////
//FLOYD'S TRIANGLE
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int num = 0;
//     cout<<"enter your number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             num=num+1;
//             cout<<num<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
///////////////////////////////////////////////////
//DIAMOND PATTERN
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter the number of 1 side's star :";
//     cin>>n;
//     //for upper triangle
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){      //for print space.
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){       //for print stars.
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     //for lower triangle
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i-1;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=(2*n-2*i+1);j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;

// }
/////////////////////////////////////////////////////////////////////
//PRINT BUTTERFLY PATTERN
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter the first half number :";
//     cin>>n;
//     for(int i =1;i<=n; i++){
//         //for upper side
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=2*n-2*i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     //for lower pyramids
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<= 2*i+6-2*n;j++){
//             cout<<" ";
//         }
//         for(int j =1;j<=n-i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
///////////////////////////////////////////////////////////
/*Question 1 : Print the 0-1 Triangle Pattern. 
For n = 5
1
01
101
0101
10101*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     bool val =true;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<val;
//             val=!val;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//////////////////////////////////////////////////////////////////////
/*Question 2 : Print the Rhombus Pattern. 
For n = 5 */
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n-1;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
///////////////////////////////////////////////////////////////
/*Question 3 : Print the Palindromic Pattern with Numbers. 
For n = 5*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;

}