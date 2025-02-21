#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    cout << "Calculator V1.0." << endl << endl;

    int firstArgument;
    cout << "First Argument: ";
    cin >> firstArgument;

    char operatorArgument;
    cout << "Operator Argument: ";
    cin >> operatorArgument;

    int secondArgument;
    cout << "Second Argument: ";
    cin >> secondArgument;

    int sum;
    switch (operatorArgument) {
        case '+': sum = firstArgument + secondArgument; break;
        case '-': sum = firstArgument - secondArgument; break;
        case '*': sum = firstArgument * secondArgument; break;
        case '/': sum = firstArgument / secondArgument; break;
        default: cout << "Invalid operator argument." << endl;
        return 1;
    }

    cout << "Equation: " << firstArgument << " " << operatorArgument << " " << secondArgument << endl;
    cout << "Result: " << sum << endl;

    return 0;
}
