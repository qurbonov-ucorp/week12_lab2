#include <iostream>
using namespace std;
void sumArrays(const double* arr1,const double* arr2, double* sum,int size) {
    for (int i = 0; i < size; i++) {
        *sum=*arr1 + *arr2;
        cout<<*sum<<" ";
        sum++;
        arr1++;
        arr2++;

    }
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    double arr1[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    double sum[n];
    sumArrays(arr,arr1,sum,n);


}