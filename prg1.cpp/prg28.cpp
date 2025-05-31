//to print patterns inc++ of a bb ccc dddd using triangle loop
#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows for the triangle pattern: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        char ch = 'a' + i - 1; // Calculate character based on row number
        for (int j = 1; j <= i; j++) {
            cout << ch; // Print character
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
