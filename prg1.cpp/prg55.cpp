#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {3, 7, 6, 4, 3, 15, 18, 20};
    vector<int> even_elements;
    for (int i = 0; i < a.size(); i += 2) {
        even_elements.push_back(a[i]);
    }
    sort(even_elements.begin(), even_elements.end());
    int j = 0;
    for (int i = 0; i < a.size(); i += 2) {
        a[i] = even_elements[j++];
    }
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}
