#include <iostream>

int main() {

    std::cout << "--------Increment by one---------" << std::endl;

    int value{5};

    // Increment by one
    value = value + 1; // 6
    std::cout << "The value is : " << value << std::endl; // 6

    value = 5; // Reset value to 5

    // Decrement by one
    value = value - 1; // 4
    std::cout << "The value is : " << value << std::endl; // 4

    std::cout << "------------Postfix increment------------" << std::endl;

    value = 5;

    std::cout << "postfix increment added: " << value++ << std::endl; // 5
    std::cout << "postfix aftermath: " << value << std::endl; // 6

    std::cout << "------------Postfix decrement------------" << std::endl;

    value = 5;

    std::cout << "postfix decrement added: " << value-- << std::endl; // 5
    std::cout << "postfix aftermath: " << value << std::endl; // 4

    std::cout << "------------prefix decrement------------" << std::endl;

    value = 5;
    --value;

    std::cout << "prefix (Decrementing) iterating the value before: " << value << std::endl;
    std::cout << "prefix (Decrementing) in this line of code: " << --value << std::endl;

    std::cout << "------------prefix increment------------" << std::endl;

    value = 8;
    ++value;

    std::cout << "prefix (incrementing) iterating the value before: " << value << std::endl;
    std::cout << "prefix (incrementing) in this line of code: " << ++value << std::endl;

    return 0;
}
