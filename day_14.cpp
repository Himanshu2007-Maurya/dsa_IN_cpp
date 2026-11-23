//TAKING INPOUT AND OUTPUT IN STRING ARRAY
// #include<iostream>
// using namespace std;
// int main(){

// char sentence[100];
// cout<<"enter your charecter"<<endl;
// cin.getline(sentence,100,'.');
// cout<<"your sentence is: "<<sentence<<endl;
// cout<<"hello world";

// return 0;
// }
//CONVERT LOWERCASE TO UPPERCASE
// #include<iostream>
// #include<cstring>
// using namespace std;

// void toUppercase(char word[], int n){
//     for(int i = 0; i < n; i++){
//         char ch = word[i];
//         if(ch >= 'a' && ch <= 'z'){
//             word[i] = ch - 'a' + 'A';
//         }
//     }
// }

// int main(){
//     char word[] = "ApPLe";
//     int length = strlen(word);
//     toUppercase(word, length);
//     cout << word << endl;
//     return 0;
// }

//REVERSE A CHAR ARRAY
// #include<iostream>
// #include<cstring>
// using namespace std;
// void reverseCharArray(char arr[], int n){
//     int st = 0;
//     int end = n - 1;
//     while(st < end){
//         swap(arr[st], arr[end]);
//         st++;
//         end--;
//     }
// }
// int main(){
//     char arr[] = "code";
//     int length = strlen(arr);
//     reverseCharArray(arr, length);
//     cout << arr << endl;
//     return 0;
// }
//CHECK PALINDROME
// #include<iostream>
// #include<cstring>
// using namespace std;
// bool isPalindrome(char arr[], int n){
//     int st = 0;
//     int end = n - 1;
//     while(st < end){
//         if(arr[st] != arr[end]){
//             cout<<"palindrome is not valid."<<endl;
//             return false;
//         }
//         st++;
//         end--;
//     }
//     cout<<"palindrome is valid."<<endl;
//     return true;
// }
// int main(){
//     char arr[] = "madam";
//     int length = strlen(arr);
//     isPalindrome(arr, length);
//     return 0;
// }

 
// Question 1 : Count how many times lowercase vowels occurred in a String entered 
// by the user.


// #include<iostream>
// #include<cstring>
// using namespace std;
// void countVowels(char arr[], int n){
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         char ch = arr[i];
//         if(ch >= 'a' && ch <= 'z'){
//             if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//                 count++;
//             }
//         }
//     }
//     cout << "Number of lowercase vowels: " << count << endl;
// }
// int main(){
//     char arr[100];
//     cout<<"enter your sentence :";
//     cin.getline(arr,100);



//     int length = strlen(arr);
//     countVowels(arr, length);
//     return 0;
// }

 
// Question 2 : You are given two strings s1 and s2 of equal length. A string swap is an 
// operation where you choose two indices in a string (not necessarily different) and 
// swap the characters at these indices. 
 
// Return true if it is possible to make both strings equal by performing at most one 
// string swap on exactly one of the strings. Otherwise, return false. 
 
// Example : 
// Input: s1 = "bank", s2 = "kanb" Output: 
// true 
// Explanation: For example, swap the first character with the last character of s2 to 
// make "bank".

// #include <iostream>
// #include <string>
// using namespace std;

// bool areAlmostEqual(string s1, string s2) {
//     if (s1 == s2) return true;

//     int first = -1, second = -1;
//     for (int i = 0; i < s1.length(); i++) {
//         if (s1[i] != s2[i]) {
//             if (first == -1) {
//                 first = i;
//             } else if (second == -1) {
//                 second = i;
//             } else {
//                 return false; // More than 2 mismatches cannot be fixed with 1 swap
//             }
//         }
//     }

//     // Must have exactly 2 mismatches and swapping them must make the strings equal
//     return (second != -1 && s1[first] == s2[second] && s1[second] == s2[first]);
// }

// int main() {
//     string s1 = "bank";
//     string s2 = "kanb";

//     if (areAlmostEqual(s1, s2)) {
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }

//     return 0;
// }




