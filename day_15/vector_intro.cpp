#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vector<int>vec2{1,2,3,4,5};
    vector<int>vec1(5,10);
    cout<<vec.size()<<endl;
    cout<<vec2.size()<<endl;
    cout<<vec1.size()<<endl;

    cout<<"Elements of vec: ";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout<<"Elements of vec1: ";
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;


    cout<<"Elements of vec2: ";
    for(int i=0;i<vec2.size();i++){
        cout<<vec2[i]<<" ";
    }

    return 0;
}