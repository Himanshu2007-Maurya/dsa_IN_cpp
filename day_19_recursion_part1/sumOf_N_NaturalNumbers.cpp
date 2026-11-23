#include<iostream>
using namespace std;
int sumOfNaturalNumbers(int n){
    if(n==0){
        return 0;
    }
    return n+sumOfNaturalNumbers(n-1);
}
int main(){
    cout<<"Enter a number:";
    int n;
    cin>>n;
    cout<<"sum of N natural numers:"<<sumOfNaturalNumbers(n)<<endl;
    return 0;
}