/* Extra Qs : Given two integers dividend and divisor, divide two integers without using 
multiplication, division, and mod operator. [ Go to Qs ]
*/

#include <iostream>
#include <climits>
using namespace std;

int divide(int dividend, int divisor) {

    // Overflow case
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    long long a = dividend;
    long long b = divisor;

    // Check result sign
    bool negative = (a < 0) ^ (b < 0);

    // Convert to positive
    a = abs(a);
    b = abs(b);

    long long ans = 0;

    while (a >= b) {

        long long temp = b;
        long long multiple = 1;

        // Double divisor using bit shift
        while ((temp << 1) <= a) {
            temp = temp << 1;
            multiple = multiple << 1;
        }

        a = a - temp;
        ans = ans + multiple;
    }

    if (negative) {
        ans = -ans;
    }

    return (int)ans;
}

int main() {

    int dividend, divisor;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    cout << "Result = " << divide(dividend, divisor);

    return 0;
}