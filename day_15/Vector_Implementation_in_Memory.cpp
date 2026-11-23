#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4};//initializing vector with 4 elements
    cout<<"size of vector: "<<vec.size()<<endl;
    cout<<"Capacity of vector: "<<vec.capacity()<<endl;

    vec.push_back(5);
    cout<<"size of vector after push_back: "<<vec.size()<<endl;
    cout<<"Capacity of vector after push_back: "<<vec.capacity()<<endl;

    vec.pop_back();  //removes the last element of vector
    cout<<"size of vector after pop_back: "<<vec.size()<<endl;
    cout<<"elements of vector: ";
    //printing the elements of vector
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}