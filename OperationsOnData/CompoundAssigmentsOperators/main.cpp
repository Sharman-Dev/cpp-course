#include <iostream>
using namespace std;

int main(){

    int value {45};

    cout << "The value is: " << value << endl;
    cout << endl; // just another endl

    value +=5; // like value = value + 5;
    cout << "the new value is: " << value << endl;
    cout << endl;

    value /=2;
    cout << "the new value is: " << value << endl;
    cout << endl;

    value -=5;
    cout << "the new value is: " << value << endl;
    cout << endl;

    value *=5;
    cout << "the new value is: " << value << endl;
    cout << endl;

    value %=28;
    cout << "the new value is: " << value << endl;
    cout << endl;        

    return 0;
}