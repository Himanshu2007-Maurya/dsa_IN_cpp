#include<iostream>
#include<string>
using namespace std;
void rd(string str,string ans,int i,int map[26]){
    if(i==str.size()){
        cout<<ans<<endl;
        return;
    }
    
    int mapidx=(int)(str[i]-'a');
    if(map[mapidx]==true){
        rd(str,ans,i+1,map);

    }else{
        map[mapidx]=true;
        rd(str,ans+str[i],i+1,map);
    }

}
int main (){
    int map[26]={false};
    string str="aappnacollege";
    string ans="";
    rd(str,ans,0,map);
}