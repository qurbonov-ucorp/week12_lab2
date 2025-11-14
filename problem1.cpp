#include <iostream>
using namespace std;
int main() {
    const int SIZE = 10;
    float *ptr, arr[SIZE];
    ptr=arr;
    cout<<"Enter 10 grades: ";
    while (ptr<arr+SIZE) {
        cin>>*ptr;
        *ptr*=0.3;
        ptr++;
    }
    ptr--;
    while (ptr>=arr) {
        cout<<*ptr<<" ";
        ptr--;
    }
    return 0;
}