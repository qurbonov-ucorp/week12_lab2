#include <iostream>
using namespace std;
bool is_in(const int* arr1,const int* arr2, int size1,int size2) {
    const int *p1=arr1;
    while(p1<arr1+size1) {
        const int *p2=arr2;
        bool found=false;
        while(p2<arr2+size2) {
            if(*p1==*p2) {
                found=true;
                break;
            }
            p2++;
        }
        if(!found)return false;
        p1++;
    }
    return true;
}
int main() {
    int n,b;
    cout<<"Enter number of elements in array1: ";
    cin>>n;
    cout<<"Enter number of elements in array2: ";
    cin>>b;
    int arr1[n];
    int arr2[b];
    if(b>n) {
        for(int i=0;i<n;i++) {
            cin>>arr1[i];
        }
        for(int i=0;i<b;i++) {
            cin>>arr2[i];
        }
    }
    else {
        return 0;
    }
    is_in(arr1,arr2,n,b);
    cout<<is_in(arr1,arr2,n,b)<<endl;
    return 0;

}