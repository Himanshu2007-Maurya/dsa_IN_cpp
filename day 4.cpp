//print the larzest of two numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b ;
//     cout<<"enter the first number :";
//     cin>>a;
//     cout<<"enter the second number :";
//     cin>>b;
//     if(a>b){
//         cout<<"a is greater than b"<<endl;

//     }
//     else{
//         cout<<"b is greater than a"<<endl;
//     }
//     return 0;

// }
//print if a number is even or odd.
// 
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<" enter number :";
//     cin>>a;
//     if((a%2)==0){
//         cout<<" the number is even.";

//     }
//     else{
//         cout<<"the number is odd";
//     }
//     return 0;
// }

//else if statement.
// #include<iostream>
// using namespace std;
// int main(){
//     float income,tax1,tax2;
//     cout<<"enter your income (in lack):";
//     cin>>income;
//     if(income<5){
//         cout<<"total income with 0%, intrest :"<<income;
//     }else if(income<=10){
//         tax1=income*0.2;
//         cout<<" total income is :"<<tax1+income<<endl;
//     }else {
//         tax2=income*0.3;
//         cout<<"total income is :"<<tax2+income<<endl;
//     }
    
    
//     return 0;
// }

// print the larzest of three nunber.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"first number is :";
//     cin>>a;
//     cout<<"second number is :";
//     cin>>b;
//     cout<<"third numberis :";
//     cin>>c;
//     if(a>b && a>c){
//         cout<<a;
//     }else if(b>a && b>c){
//         cout<<b;
//     }else {
//         cout<<c;
//     }

// }
// create a clculator by using 4 assignment opretor +,-,*,/ .
// #include<iostream>
// using namespace std;
// int main(){
//     float a,b;
//     char opr;
//     cout<<"enter the first number :";
//     cin>>a;
//     cout<<"enter the second number :";
//     cin>>b;
//     cout<<" opretor :";
//     cin>>opr;

    // if(opr== '+' ){
    //     cout<<"A+B= "<<a+b;
    // }else if(opr== '-'){
    //     cout<<"A-B= "<<a-b;
    // }else if(opr== '*'){
    //     cout<<"A*B= "<<a*b;
    // }else if(opr== '/'){
    //     cout<<"A*B= "<<a*b;
    // }else{
    //     cout<<"invalid";
    // }
    //using of switch method.
//     switch(opr){
//         case '+':cout<<"A+B= "<<a+b<<endl;
//         break;
//         case '-':cout<<"A-B= "<<a-b<<endl;
//         break;
//         case '*':cout<<"A*B= "<<a+b<<endl;
//         break;
//         case '/':cout<<"A/B= "<<a/b<<endl;
//         break;
//         default:cout<<"invalid";

//     }

//     return 0;
// }
//####ASSIGNMENT AT FOUR DAY########
//Question 1 : Write a C++ program to get a number from the user and print whether 
//it's positive, negative or zero.
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter the number :";
//     cin>>num;
    
//     if(num>0){
//         cout<<"positive";
    
//     }else if(num<0){
//         cout<<"negative";
//     }else{
//         cout<<"zero";
//     }
//     return 0;
// }
/*Question 2 : Write a C++ program that takes a year from the user and print whether 
that year is a leap year or not.*/
// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"enter the year :";
//     cin>>year;
//     if((year%4)==0){
//         cout<<"leap year";
//     }else{
//         cout<<"non leap year";
//     }
//     return 0;
// }

/*: For any 3 digit number check whether it’s an Armstrong number or not. 
Armstrong number is a number that is equal to the sum of cubes of its digits.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the 3 didgits number :";
    cin>>n;
    int num = n;
    //for last digit
    int dig1 = num%10;
    num= num/10;
    int dig2 = num%10;
    num = num/10;
    int dig3 = num%10;
    int cubesum = dig1*dig1*dig1+dig2*dig2*dig2+dig3*dig3*dig3;
    if(cubesum==n){
        cout<<"the number is armstrong number.";
    }else{
        cout<<"the number is not armstrong.";
    }
    return 0;
    
}