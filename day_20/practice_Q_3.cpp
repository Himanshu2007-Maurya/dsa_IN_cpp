/*Question 3 : We are given a string S, we need to find the count of all contiguous
substrings starting and ending with the same character. [Leetcode Premium Qs]
Sample Input 1 : S = "abcab"
Sample Output 1 : 7
There are 15 substrings of "abcab" : a, ab, abc, abca, abcab, b, bc, bca, bcab, c, ca, cab, a,
ab, b
Out of the above substrings, there are 7 substrings : a, abca, b, bcab, c, a and b. So, only
7 contiguous substrings start and end with the same character.
Sample Input 2 : S = "aba"Sample
Output 2 : 4
The substrings are a, b, a and aba*/
#include<iostream>
#include<string>
using namespace std;

int countSubString(string str,int i,int j,int n){
    //base case smallest string
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    //i is the stating index and j is the end index
    int res=countSubString(str,i+1,j,n-1)+countSubString(str,i,j-1,n-1)-countSubString(str,i+1,j-1,n-2);
    if(str[i]==str[j]){
        res++;// store result in res variable
        
    }
    return res; //print the value of res

}
int main(){
    string str = "abcab";
    int n = str.size();
    cout<<countSubString(str, 0, n-1, n) <<endl;
    return 0;
}
 