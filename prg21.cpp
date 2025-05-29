// convert binary to decimal
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int binary, decimal = 0, base = 1, last_digit;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        last_digit = binary % 10; 
        decimal += last_digit * base; 
        binary /= 10;
        base *= 2; 
    }

    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}