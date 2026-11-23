#include<iostream>
using namespace std;
int setIthBit(int num, int i) {
    int bitMask = 1 << i;
    return (num | bitMask);
}
int main() {
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the position of bit to set: ";
    cin >> i;
    cout << setIthBit(num, i) << endl;
    return 0;
}