#include <iostream>

int main(){

    //Compile time error
    std::cout << "hello world!" << std::endl;

    //runtime error
    int value = 7/2;
    std::cout << "value: " << value << std::endl;

    return 0;
}