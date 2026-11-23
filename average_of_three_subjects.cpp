#include<iostream>
using namespace std;
int main(){
    int science;
    int english;
    int maths;
    int average;
    cout<<"enter the marks of science :";
    cin>>science;
    cout<<"enter the marks of english :";
    cin>>english;
    cout<<"enter the marks of maths :";
    cin>>maths;
    average = science+english+maths/3;
    cout<<"average of threes subjects :"<<average<<endl;
    return 0;


}
