#include <iostream>
using namespace std;

int getIthBit(int num, int i) {
    int bitMask = 1 << i;

    if (num & bitMask) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num, i;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the position of bit to check: ";
    cin >> i;

    cout << getIthBit(num, i) << endl;

    return 0;
}