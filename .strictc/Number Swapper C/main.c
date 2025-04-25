#include <stdio.h>

void valueSwapper(int firstNumber, int secondNumber) {

    int tempNumber = firstNumber;
    firstNumber = secondNumber;
    secondNumber = tempNumber;

    printf(
        "The numbers have been swapped: \n"
        "First Number: %d \n"
        "Second Number: %d \n"
        , firstNumber, secondNumber
        );

}

int main(void) {
    printf("Number Swapper V2.0!\n");

    int firstNumber;
    int secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    getchar();
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    getchar();

    valueSwapper(firstNumber, secondNumber);

    fflush(stdin);
    getchar();
    return 0;
}