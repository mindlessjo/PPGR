#include <iostream>

using namespace std;

int main() {

    int randomValue = 275; // A regular variable
    int* memoryPointer = &randomValue; // creates a pointer that points to "randomValue"
    //the (*) declares it is a variable that stores a memory address where a value of the specified type can be found.
    //The ampersand (&) is called the "address-of" operator. It returns the memory address where the variable is stored.

    cout << memoryPointer; // assesses the pointer to the memory address of the variable



}