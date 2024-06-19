// C++ Program to Illustrate that Array Name is a Pointer
// that Points to First Element of the Array
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int* ptr= arr;
    cout<< "Memory address for arr: "<< &arr<<endl;
    cout<< "Memory address for arr: "<< ptr<<endl;
    return 0;
}