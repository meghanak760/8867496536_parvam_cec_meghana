//sort the array in the odd index places
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> a = {13, 7, 6, 4, 3, 15, 18, 20};
    sort(a.begin(), a.end());  
    for (int i = 1; i < a.size(); i += 2) {
        cout << a[i] << " ";
    }
    return 0;
}