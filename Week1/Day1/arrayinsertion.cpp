#include <iostream>
#include <string>
int main(){
    std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[1]="opel";
    std::cout << cars[0]<<" "<<cars[1];
    return 0;
}