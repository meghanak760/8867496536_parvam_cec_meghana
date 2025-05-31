//addition of two dimensional arrays
#include <iostream>
using namespace std;
int main() {
    const int ROWS = 2, COLS = 3;
    int arr1[ROWS][COLS], arr2[ROWS][COLS], sum[ROWS][COLS];
    cout << "Enter elements for the first 2D array (" << ROWS << "x" << COLS << "):" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter elements for the second 2D array (" << ROWS << "x" << COLS << "):" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "Sum of the two 2D arrays:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
