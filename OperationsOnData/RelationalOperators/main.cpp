#include <iostream>

int main(){

    int num1 {20};
    int num2 {15};

    std::cout << "Number 1: " << num1 << std::endl;
    std::cout << "Number 2: " << num2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;

    std::cout << "(num1 == num2): " << (num1 == num2) << std::endl;
    std::cout << std::endl;

    std::cout << "(num1 != num2): " << (num1 != num2) << std::endl;
    std::cout << std::endl;

    std::cout << "(num1 <= num2): " << (num1 <= num2) << std::endl;
    std::cout << std::endl;

    std::cout << "(num1 >= num2): " << (num1 >= num2) << std::endl;
    std::cout << std::endl;    

    return 0;
}