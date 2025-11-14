#include <iostream>
#include <vector>
using namespace std;

int singleNum(vector<int>& vec) {
    int result = 0;
    for (int x : vec) {
        result ^= x;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << singleNum(v);
}