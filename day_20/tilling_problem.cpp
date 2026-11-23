#include<iostream>
using namespace std;
int tp(int n){
    if(n==0||n==1){// base case
        return 1;
    }
    return tp(n-1)+tp(n-2); // vertical+Horizontal
}

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"number of the ways to fill a 2*"<<n <<"rectangle:"<<tp(n)<<endl;//2*n rectangle
    return 0;
}