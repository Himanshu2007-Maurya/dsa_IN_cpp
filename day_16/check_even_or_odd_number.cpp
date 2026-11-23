#include<iostream>
using namespace std;
void evenORodd(int num){
    if((num&1)==0){
        cout<<num<<" is an even number"<<endl;
    }
    else{
        cout<<num<<" is an odd number"<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    evenORodd(num);
    return 0;
}