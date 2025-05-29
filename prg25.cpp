//matrix multiplication
#include <iostream>
using namespace std;
int main() {
    const int ROWS1 = 2, COLS1 = 3, ROWS2 = 3, COLS2 = 2;
    int mat1[ROWS1][COLS1], mat2[ROWS2][COLS2], product[ROWS1][COLS2] = {0};

    cout << "Enter elements for the first matrix (" << ROWS1 << "x" << COLS1 << "):" << endl;
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS1; j++) {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter elements for the second matrix (" << ROWS2 << "x" << COLS2 << "):" << endl;
    for (int i = 0; i < ROWS2; i++) {
        for (int j = 0; j < COLS2; j++) {
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            for (int k = 0; k < COLS1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout << "Product of the two matrices:" << endl;
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}