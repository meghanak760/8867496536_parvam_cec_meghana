//count the number of vowel in string
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    int count = 0;
    for (char c : str) {
        c = tolower(c); // Convert character to lowercase
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    
    cout << "Number of vowels in the string: " << count << endl;
    return 0;
}
