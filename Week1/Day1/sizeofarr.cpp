// C++ Program to Illustrate How to Find the Size of an
// Array
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    cout<< "size of arr[0]: "<< sizeof(arr[0])<<endl;
    cout<< "size of arr: "<< sizeof(arr)<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "length of the array: "<< n <<endl;
    return 0;
}