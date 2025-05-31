//An autobiographical number is anumber that describes itself in terms of the counts of its digits
#include <iostream>
using namespace std;
bool isAutobiographical(int num) {
    int count[10] = {0};
    int temp = num;
    while (temp > 0) {
        count[temp % 10]++;
        temp /= 10;
    }
    temp = num;
    int position = 0;

    while (temp > 0) {
        int digit = temp % 10;
        if (count[position] != digit) {
            return false; 
        }
        position++;
        temp /= 10;
    }

    return true; 
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isAutobiographical(num)) {
        cout << num << " is an Autobiographical number." << endl;
    } else {
        cout << num << " is NOT an Autobiographical number." << endl;
    }
    return 0;
}
