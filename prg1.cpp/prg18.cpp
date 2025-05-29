//swapping of numbers using arithematic operations
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    a = a + b; //Add both numbers
    b = a - b; //Subtract the new value of 'a' with 'b' to get original 'a'
    a = a - b; //subtract the new value of 'b' from 'a' to get original 'b'

    cout << "After swapping:" << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;

    return 0;
}