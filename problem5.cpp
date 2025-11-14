#include <iostream>
using namespace std;
void swap(int* arr1,int* arr2,int size) {
    int temp;
    for(int i=0;i<size;i++) {
        temp=*arr1;
        *arr1=*arr2;
        *arr2=temp;
        arr1++;
        arr2++;
    }
}
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    int b[n];
    cout<<"Enter elements for array1: ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"Enter elements for array2: ";
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    cout<<"###Swapped###"<<endl;
    swap(a,b,n);
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++) {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}