#include<iostream> 
#include<string> 
using namespace std; 

void findPermutation(string str, string ans){ 
    // FIXED: Corrected the variable declaration and assignment
    int n = str.size(); 
    
    if(str.size() == 0){ 
        cout << ans << "\n"; 
        return; 
    } 
    
    for(int i = 0; i < str.size(); i++){ 
        char ch = str[i]; 
        
        // FIXED: Changed type from 'int' to 'string' so it can store text
        string newStr = str.substr(0, i) + str.substr(i + 1, n - i - 1); 
        
        findPermutation(newStr, ans + ch); 
    } 
} 

int main(){ 
    string str = "abc"; 
    string ans = ""; 
    findPermutation(str, ans); 
    return 0; 
}

