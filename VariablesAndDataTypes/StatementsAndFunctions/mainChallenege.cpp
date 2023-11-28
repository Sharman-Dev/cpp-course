#include <iostream>

int multiply(int first_param, int second_param){

    int result = first_param * second_param;
    return result;
}

int main(){

    int num1;
    std::cout << "number one: ";
    std::cin >> num1;

    int num2;
    std::cout << "number two: ";
    std::cin >> num2;

    int mul = multiply(num1, num2);
    std::cout << "the multiply of " << num1 << " and " << num2 << " is " << mul;

    return 0;
}