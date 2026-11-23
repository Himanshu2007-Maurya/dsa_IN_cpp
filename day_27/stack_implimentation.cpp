#include<iostream>
#include<vector>
using namespace std;
class stack{
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout << "stack is already empty." << endl;
            return;
        }
        vec.pop_back();
    }
    int top(){
        if(isEmpty()){
            cout << "stack is already empty." << endl;
            return -1;
        }
        int lastDig = vec.size() - 1;
        return vec[lastDig];
    }
    bool isEmpty(){
        return vec.size() == 0;
    }
};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
     
    while(!s.isEmpty()){
        cout << s.top() << ",";
        s.pop();
    }
    return 0;
}