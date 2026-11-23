#include<iostream>
using namespace std;
int countSetBits(int num){
    int count=0;
    int i;
    while(num>0){
        int lastDig=num&i;
        count+=lastDig;
        num=num>>1;
    }
    cout<<count<<endl;
    return count;
}
int main(){
    countSetBits(12);
    return 0;
}