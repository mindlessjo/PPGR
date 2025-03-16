#include <stdio.h>

int main(void) {
    printf("Calculator V2.0!\n\n");

    float firstArgument = 0;
    float secondArgument = 0;
    char operatorArgument;
    int validInput; // 0/1 means input is invalid, used when determining function validity

    // Executes at least once
    do {
        validInput = 0;
        printf("First Argument: ");
        if (scanf("%f", &firstArgument) == 1) { // 1 means input is valid
            validInput = 1; // The input is valid and exits the loop
        } else {
            printf("Incorrect value input. Try again. \n");
        }
        while (getchar() != '\n') {} // Loops cleaning the input buffer until you get to \n
    } while (!validInput); // will loop when condition stays false

    // Executes at least once
    do {
        printf("Operator Argument: ");
        scanf(" %c", &operatorArgument);

        while (getchar() != '\n') {} // Loops cleaning the input buffer until you get to \n

        if (operatorArgument != '+' && operatorArgument != '-' &&
            operatorArgument != '*' && operatorArgument != '/') {
            printf("Invalid operator. "); // Invalid character feedback
        }
        // Loop is ended when one of these parameters is met
    } while (operatorArgument != '+' && operatorArgument != '-' &&
            operatorArgument != '*' && operatorArgument != '/');

    // Executes at least once
    do {
        validInput = 0;
        printf("Second Argument: ");
        if (scanf("%f", &secondArgument) == 1) {
            validInput = 1;
        } else {
            printf("Incorrect value input. Try again. \n");
        }
        while (getchar() != '\n') {} // Loops cleaning the input buffer until you get to \n
    } while (!validInput);

    float result = 0;

    switch (operatorArgument) {
        case '+': result = firstArgument + secondArgument; break;
        case '-': result = firstArgument - secondArgument; break;
        case '*': result = firstArgument * secondArgument; break;
        case '/':
            if (secondArgument == 0) {
                printf("Error: Cannot divide by zero.\n");
                return 1;  // Exit program in case of an unforeseen issue
            }
            result = firstArgument / secondArgument; break;
        default:
            printf("Unexpected error occurred.\n");
        return 1;  // Exit program in case of an unforeseen issue
    }

    printf("The equation is: %0.2f %c %0.2f = %0.2f",firstArgument, operatorArgument, secondArgument, result);

    return 0;
}