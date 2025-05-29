 #include <iostream>
#include <string>
using namespace std;
int main() {
    int n,digit,reverse;
    cout<< "Enter a positive integer: ";
    cin>>n;
    while (n > 0) {
        digit=n%10;
        cout << digit<<"\n";
        n = n/10; 
        reverse =reverse*10+digit;
    }
    cout << "\nReversed number: " << reverse << endl; 
    return 0;
}