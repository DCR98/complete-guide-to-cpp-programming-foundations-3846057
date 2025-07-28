// Complete Guide to C++ Programming Foundations
// Exercise 01_02 with changes
// Hello World, by Eduardo Corpeño 

#include <iostream>

int add(int a, int b){
    return a + b;
}
int main(){
    int result = add(5,3);
    std::cout<< "The sum is = " << result << std::endl;
    return 0;
}