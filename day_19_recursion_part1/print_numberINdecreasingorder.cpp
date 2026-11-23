#include<iostream>
using namespace std;
int numbers(int n){
    if(n==0){     // base case where recursion stops
        return 0;
;
    }
    // cout<<n<<endl;//work of the function
    // return numbers(n-1);//recursive call to thr function


    //For increasing order
    cout<<numbers(n-1)<<endl;
    return n;
}
int main(){
    cout<<"Enter a number:";
    int n;
    cin>>n;
    cout<<"Numbers in decreasing order are:"<<numbers(n)<<endl;
    return 0;
}