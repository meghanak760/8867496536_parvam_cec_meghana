//1399 is emrip number or not
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

bool isEmirp(int n) {
    int reversed = 0, original = n;

   
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;    
    }

  
    if (original == reversed) return false;

   
    return isPrime(original) && isPrime(reversed);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isEmirp(num)) {
        cout << num << " is an Emirp number." << endl;
    } else {
        cout << num << " is NOT an Emirp number." << endl;
    }

    return 0;
}