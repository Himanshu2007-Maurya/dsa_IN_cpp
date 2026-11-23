// #include<iostream>
// using namespace std;
// int main(){
//     // int num;
    
//     // for( num= 1; num>=0; num++){
//     //     cout<<num<<" "<<endl;
//     // }
//     // // cout<<endl;
//     // // cout<<"the last value of num :"<<num<<endl;
//     for(int i= 1;i<=5;i++){
//         cout<<"  Himanshu"<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout <<"enter number :";
//     cin>>n;
//     for( int i=758;i<=n;i++){
//         cout<<i<<"   ";
//     }
//     return 0;

// }
//print sum first N natural numbers
// #include<iostream>
// using namespace std;
// int main(){
//     // int n;
    // int sum = 0;
    // cout<<"enter the first n natural number :";
    // cin>>n;
    // for(int i=0;i<=n;i++){
    //     cout<<i<<"+ ";
    // sum=sum+i;
    // }
    // cout<<endl;
    // cout<<"sum of first n natural numbers :"<<sum;
    //while loop
//     int count = 1;
//     while(count<7){
//         cout<<count<<" ";
//         count++;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     // int n;
    // cout<<"enter number :";
    // cin>>n;
    // // for(i=1; i<5; i++){
    // //     cout<<"****"<<endl;
    // // }
    // for(int i=n;i>=1;i--)
    // cout<<i<<"";
//     int n =16546747;
//     int sum =0;
//     int lastdig;
//     while(n>0){
//          lastdig= n%10;

//         // sum=sum+lastdig;
//         n=n/10;
//         int odd1=(lastdig%2)!=0;
       
//             cout<<odd1;
        
//         sum=sum+odd1;
        
        
//     }
//     // if ((lastdig%2)!=0){
//     cout<<" sum of numbers :"<<sum;
//     // }

//     return 0;
// }

// question: reverse a given number and print the result
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int lastdig;
//     int res = 0;
//     cout<<"enter number :";
//     cin>>n;
//     while(n>0){
//         lastdig = n%10;
//         res = res*10+lastdig;
//         n=n/10;
//         cout<<"last digit is :"<<lastdig<<endl;
//     }
//     cout<<"reverse result :"<<res;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
    
//     do{
//         cout<<"enter number :";
//         cin>>n;
//         if(n%10==0){
//             continue;
//         }
//             cout<<"your enterd :"<<n<<endl;
//         }while(true);
//         // cout<<"your enterd :"<<n;
//     return 0;
// }
//question: Check if a number is prime or not ?
// #include<iostream>

// using namespace std;
// int main(){
// int n;
// int isprime = true ;
// cout<<"enter the number :";
// cin>>n;

// for(int i=2 ; i<= n-1; i++){         //#include<cmath>     sqrt(n)
//     if(n%i==0){
//         isprime = false;
//         break;
//     }
// }
// if(isprime==true){
//     cout<<"number is prime ."<<endl;
// }else{
//     cout<<" number is not prime .";
// }
// return 0;
// }
// Question 1 : WAP to find the Factorial of a number entered by the user.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//     int fact = 1;
//     for(int i= 1;i<=n;i++){
//         fact= fact*i;
        
//     }
//     cout<<"factorial of number is :"<<fact<<endl;     
//     return 0; 
// }
//Question 3 : WAP to input a number and check whether the number is an Armstrong
//number or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout <<"enter number for chaking armstrong number :";
//     cin>>n;
//     int cubesum = 0;
//     int num = n;
//     while(num>0){
//        int  lastdig=num%10;
//        cubesum=lastdig*lastdig*lastdig;
//        num =num/10;

//     }
//     if(n==cubesum){
//         cout<<"it is armstrong number :"<<cubesum<<endl;
//     }else{
//         cout<<"it is not armstrong number :"<<endl;
//     }
    
//     return 0;
// }
//Question 2 : WAP to print the multiplication table of a number, entered by the user.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number: ";
//     cin>>n;
//     for(int i=1;i<=10;i++){
        
//         cout<< (n*i) <<endl;
//     }
//     return 0;
// }
//Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.
//(Assume N >= 2)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//     for(int i=2; i<=n; i++) {
//         int curr = i;
//         bool isprime=true;
//         for(int j=2;j*j<=i;j++){
//             if(curr%j==0){
//                 isprime=false;
//             }
//         }
//         if(isprime){
//             cout<<curr<<" ";
//         }
//     }
//     return 0;
// }
/////////////////////////////
/*Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.
(Assume N >= 2)
Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ….
This is a series where each number is a sum of previous 2 numbers in the series.Eg
: 1 = 0 + 1,
2 = 1 + 1,
3 = 1 + 2,
5 = 2 + 3,
8 = 3 + 5 & so on*/
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int first =0,sec = 1;
    cout<<first<<" "<<sec<<" ";
    for(int i=2;i<n;i++){
        int third = first +sec;
        cout<< third<<" ";
        first = sec;
        sec = third;
    }
    cout<<"\n";
    return 0;
}