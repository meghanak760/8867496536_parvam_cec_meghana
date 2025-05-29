//swapping without temporary variable using multiplication and division
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a != 0 && b != 0) { // Check to avoid division by zero
        a = a * b; // Multiply both numbers
        b = a / b; // Divide the product by 'b' to get original 'a'
        a = a / b; // Divide the product by new 'b' to get original 'b'

        cout << "After swapping:" << endl;
        cout << "First number: " << a << endl;
        cout << "Second number: " << b << endl;
    } else {
        cout << "Error: Cannot swap with zero." << endl;
    }

    return 0;
}