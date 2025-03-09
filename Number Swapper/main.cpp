#include <iostream>

using namespace std;

// function using pointers
void pointerNumSwap() {
    int firstNum = 0, secondNum = 0;

    cout << "First Number: ";
    cin >> firstNum;

    cout << "Second Number: ";
    cin >> secondNum;

    cout << "First Number: " << firstNum << "\n";
    cout << "Second Number: " << secondNum << "\n\n";

    int* ptr1 = &firstNum;
    int* ptr2 = &secondNum;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "First Number: " << firstNum << "\n";
    cout << "Second Number: " << secondNum << "\n";
    cout << "END OF POINTERS FUNCTION\n\n";

}

// functino using references
void referenceNumSwap(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {

    cout << "\nNumber Swapper with Pointers\n\n";

    // reference using pointers
    cout << "The results from using pointers: \n";
    pointerNumSwap();


    // solution using references
    cout << "The results from using references: \n";
    int firstNum = 0, secondNum = 0;

    cout << "First Number: ";
    cin >> firstNum;

    cout << "Second Number: ";
    cin >> secondNum;

    cout << "First Number: " << firstNum << "\n";
    cout << "Second Number: " << secondNum << "\n\n";

    referenceNumSwap(firstNum, secondNum);

    cout << "First Number: " << firstNum << "\n";
    cout << "Second Number: " << secondNum << "\n\n";
    cout << "END OF REFERENCES FUNCTION\n\n";

    return 0;

}