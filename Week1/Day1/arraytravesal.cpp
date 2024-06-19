// C++ Program to Illustrate How to Traverse an Array
#include <iostream>
using namespace std;
int main(){
    int twos_table[10]= {2,4,6,8,10,12,14,16,18,20};
    for (int i=0; i<10;i++){
        cout<<twos_table[i]<<" ";
    } 
    int sizearr = sizeof(twos_table);
    cout<< "\n" << sizearr;
    return 0;
}