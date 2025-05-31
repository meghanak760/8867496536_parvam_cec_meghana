//reversing the string
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Reverse the string
    string reversedStr(str.rbegin(), str.rend());

    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}