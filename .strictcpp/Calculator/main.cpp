#include <iostream>

using namespace std;

void calculation() {

    double firstArgument, secondArgument, sum = 0;
    char operatorArgument;


    cout << "First Argument: ";
    cin >> firstArgument;

    cout << "Operator Argument: ";
    cin >> operatorArgument;

    cout << "Second Argument: ";
    cin >> secondArgument;

    cout << "Equation: " << firstArgument << " " << operatorArgument << " " << secondArgument << endl;

    switch (operatorArgument) {
        case '+': sum = firstArgument + secondArgument; break;
        case '-': sum = firstArgument - secondArgument; break;
        case '*': sum = firstArgument * secondArgument; break;
        case '/': sum = firstArgument / secondArgument; break;
        default: cout << "Invalid operator argument.\n"; return;;
    }

    cout << "Result: " << sum << endl;
}

int main() {
    cout << "Calculator V1.0." << endl << endl;

    calculation();
    return 0;
}
