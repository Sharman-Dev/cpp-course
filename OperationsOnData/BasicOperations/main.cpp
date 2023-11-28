#include <iostream>

int main(){

    //Addition

    int num1;
    std::cout << "type a number 1: ";
    std::cin >> num1;
    std::cout << std::endl;


    int num2;
    std::cout << "type a number 2: ";
    std::cin >> num2;
    std::cout << std::endl;

    std::cout << "-----------------------" << std::endl;

    int result = num1 + num2;
    std::cout << "the sum result is: " << result << std::endl;

    //substraction

    result = num1 - num2;
    std::cout << "The subs result is: " << result << std::endl;

    result = num2 - num1;
    std::cout << "The subs result is: " << result << std::endl;

    //Multiplication

    result = num1 * num2;
    std::cout << "the multiply result is: " << result << std::endl;

    //Division 
    // no nos da una division con numeros decimales
    // solo enteros por ejemplo 5 / 2 sera = 2 porque 2 cabe 2 veces en 5
    result = num1 / num2;
    std::cout << "The division result is: " << result << std::endl;

    //module
    result = num1 % num2;
    std::cout << "The module result is: " << result << std::endl;

    return 0;
}