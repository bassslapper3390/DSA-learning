#include <iostream>
#include <string>
using namespace std;
int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[1]="opel";
    cout << cars[0]<<" "<<cars[1];
    return 0;
}