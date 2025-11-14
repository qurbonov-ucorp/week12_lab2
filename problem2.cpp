#include <iostream>
using namespace std;

int evenCount(const int* a, int size) {
    int count = 0;
    const int* ptr = a;

    for (int i = 0; i < size; i++) {
        if (*ptr % 2 == 0) {
            count++;
        }
        ptr++;
    }

    return count;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    int* p = arr;
    for (int i = 0; i < size; i++) {
        cin >> *p;
        p++;
    }

    int result = evenCount(arr, size);
    cout << "Number of even elements: " << result << endl;

}
