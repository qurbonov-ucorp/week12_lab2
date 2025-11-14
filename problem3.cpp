#include <iostream>
using namespace std;

bool is_mirrored(const int* a, const int* b,int size) {
    for(int i=0;i<size;i++) {
        if (*a != *b) {
            return false;
        }
        a++;
        b--;
    }
    return true;
}
int main() {
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr1[n];
    int arr2[n];
    cout<<"Enter elements of array1: ";
    for(int i=0;i<n;i++) {
        cin>>arr1[i];
    }
    cout<<"Enter elements of array2: ";
    for(int i=0;i<n;i++) {
        cin>>arr2[i];
    }
    cout<<is_mirrored(arr1,&arr2[n-1],n);
    return 0;

}