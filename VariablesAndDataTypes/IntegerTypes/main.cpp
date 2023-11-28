#include <iostream>
using namespace std;

int main(){

    /*
    //Braced initializers
    //Variable may contain random garbage. WARNING
    int elephant_count;

    int lion_count{}; //Initializes with 0

    int dog_count {10}; //Initializes with  10

    int cat_count {15}; //Initializes with 15

    //Can use expression as initializer
    int domesticated_animals { dog_count + cat_count };
    //cout << domesticated_animals;

    // Exception You can't initialize something with data that hadn't been initialize
    // int new_number{doesnt_exist};

    // you can´t save franctional numbers in an integer value
    //int narrowing_conversion{2.9};

    cout << "Elephant count: " << elephant_count << endl;
    cout << "Lion count: " << lion_count << endl;
    cout << "Dog count: " << dog_count << endl;
    cout << "Cat count: " << cat_count << endl;
    cout << "Domesticated animals count: "<< domesticated_animals << endl;
    */
    // Functional initialization
    /*
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    // int bad_initialization(doesnt_exist3 + doesnt_exist4)

    //Information lost. Less safe than braced initializers
    int narrowing_conversion_functional(2.9);
    cout << "Apple count: " << apple_count << endl;
    cout << "Orange count: " << orange_count << endl;
    cout << "Fruit count: " << fruit_count << endl;
    cout << "Narrowing conversion: " << narrowing_conversion_functional;
    */

    // Assigment notation

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    cout << "Bike count: " << bike_count << endl;
    cout << "Truck count: " << truck_count << endl;
    cout << "vehicle count: " << vehicle_count << endl;
    cout << "Narrowing conversion: " << narrowing_conversion_assignment << endl;

    // Check the size with sizeof
    cout << "size of int: " << sizeof(int) << endl;
    cout << "size of truck_count: " << sizeof(truck_count) << endl;
    return 0;
}