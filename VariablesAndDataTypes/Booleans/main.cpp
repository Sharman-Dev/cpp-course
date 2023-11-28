#include <iostream>

int main(){
    
    bool red_light {true};
    bool green_light {false};
 
    if (red_light == true) {
        std::cout << "Stop" << std::endl;
    }else {
        std::cout << "keep going" << std::endl;
    }

    if (green_light) {
        std::cout << "The light is green" << std::endl;
    }else {
        std::cout << "The light is NOT green" << std::endl;
    }

    //size of booleans
    std::cout << "size of boolean is: " << sizeof(bool) << std::endl;

    //printing out a boolean
    // 1 --> true
    // 0 --> false
    std::cout << std::endl;
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;

    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    return 0;
}