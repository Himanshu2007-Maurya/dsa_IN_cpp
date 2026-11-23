//WAF to upadte the ith bit in a number according to the given value of bit (0 or 1)
// num=7,i=2,val=0
//num=7,i=3,val=1
#include<iostream>
using namespace std;
void updateIthBit(int num,int i,int val){
    num = num& ~(1<<i);
    num=num|(val<<i);
    cout<<num<<endl;
}
int main(){
    updateIthBit(7,2,0);
    return 0;

}