//split in reverse order using while loop
    #include <iostream>
#include <string>
using namespace std;
int main() {
    int n,digit;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n > 0) {
        digit=n%10;
        cout << digit << " ";
        n = n / 10; 
    }
    return 0;
}

   