// arrays addition
#include <iostream>
using namespace std;
int main() {
    const int SIZE = 5; 
    int arr1[SIZE], arr2[SIZE], sum[SIZE];
    cout << "Enter " << SIZE << " elements for the first array: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr1[i];
    }
    cout << "Enter " << SIZE << " elements for the second array: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < SIZE; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    cout << "Sum of the two arrays: ";
    for (int i = 0; i < SIZE; i++) {
        cout << sum[i] << " ";
    }
    cout << endl;
    return 0;
}