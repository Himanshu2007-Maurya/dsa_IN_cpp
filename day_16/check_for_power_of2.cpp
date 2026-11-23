#include<iostream>
using namespace std;
bool checkPowerOf2(int num) {
    if((num&num-1)==0) {
        return true;
    } else {
        return false;
    }

}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << checkPowerOf2(num) << endl;

    return 0;
}