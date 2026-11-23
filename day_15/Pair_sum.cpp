#include<iostream>
#include<vector>
using namespace std;
vector<int> sum(vector<int> arr,int target){
    int st=0, end=arr.size()-1;
    int current_sum;
    vector<int> ans;
    while(st<end){
        current_sum=arr[st]+arr[end];
        if(current_sum==target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(current_sum<target){
            st++;
        }
        else{
            end--;
        }
    }
    return ans;
}

int main (){
    vector<int> arr={2,7,11,15};
    int target=9;
    vector<int> ans=sum(arr,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}