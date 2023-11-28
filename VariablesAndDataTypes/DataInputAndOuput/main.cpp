#include <iostream>
#include <string>
using namespace std;

int main() {
    string full_name;
    int age;

    cout << "Please type your full name and age: " << std::endl;

    getline(std::cin, full_name);
    cin >> age;

    cout << full_name << " you are " << age << " years old" << std::endl;

    return 0;
}