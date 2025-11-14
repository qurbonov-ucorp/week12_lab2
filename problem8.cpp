#include <iostream>
#include <vector>
using namespace std;

vector<int> addOne(vector<int>& v) {
    int n = v.size() - 1;

    v[n]++;

    for (int i = n; i >= 0; i--) {
        if (v[i] >= 10) {
            v[i] %= 10;
            if (i != 0) {
                v[i - 1] += 1;
            } else {
                v.insert(v.begin(), 1);
            }
        }
    }
    return v;
}

int main() {
    vector<int> v;
    v.push_back(9);
    v.push_back(9);

    vector<int> output = addOne(v);

    for (int i = 0; i < output.size(); i++) {
        cout << output[i];
    }

    return 0;
}1