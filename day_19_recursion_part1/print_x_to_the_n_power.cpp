#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==0){
        return 1;
    }
     
    int halfPow=pow(x,n/2);
    int halfPowSquare=halfPow*halfPow;
    if(n%2!=0){
        return x*halfPowSquare;
    }
    return halfPowSquare;
}

int main(){
    int x,n;
    cout<<"enter base number:";
    cin>>x;
    cout<<"enter power number:";
    cin>>n;
    cout<<pow(x,n)<<endl;

    return 0;
}