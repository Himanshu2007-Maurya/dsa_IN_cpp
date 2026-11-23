//WAF to clear last i bits of a number
#include<iostream>
using namespace std;
void clearBits(int num ,int i){
    int bitmask=(~0)<<i;
    num=num&bitmask;
    cout<<num<<endl;
}
int main(){
    clearBits(45,5);
    return 0;
}
    

