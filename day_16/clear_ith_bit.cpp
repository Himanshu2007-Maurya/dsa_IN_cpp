#include<iostream>
using namespace std;
int clearIthBit(int num, int i) {
    int bitMask = ~(1 << i);
    return (num & bitMask);
}
int main() {
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the position of bit to clear: ";
    cin >> i;
    cout << clearIthBit(num, i) << endl;
    return 0;
}