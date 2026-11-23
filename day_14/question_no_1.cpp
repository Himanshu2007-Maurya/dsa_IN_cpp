//how many time lowercase vowel occured in string entered by the user.
#include <iostream>
using namespace std;
int main(){
    char sentence[100];
    cin.getline(sentence, 100);
    int count = 0;
    for(int i = 0; sentence[i] != '\0'; i++){
        if(sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u'){
            count++;
        }
    }
    cout << "Number of lowercase vowels: " << count << endl;
    return 0;
}


 
