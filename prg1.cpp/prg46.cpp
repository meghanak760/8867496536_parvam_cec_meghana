//create a class number with an inline function that displays the square of a number
#include <iostream>
using namespace std;
class Number {
public:
    inline void displaySquare(int num) {
        cout << "Square of " << num << " is: " << num * num << endl;
    }
};
int main() {
    Number number;
    int input;

    cout << "Enter a number to find its square: ";
    cin >> input;

    number.displaySquare(input);

    return 0;
}
