#include <stdio.h>

int conversion(double currentTemp, char currentUnit, char targetUnit) {

    float result;

    return 1+1;
}

int main(void) {
    printf("Temperature Converter 2.0\n");

    double currentTemp;
    char currentUnit, targetUnit;
    int validInput;

    do {
        validInput = 0;
        printf("\nEnter temperature: ");

        if (scanf("%lf", &currentTemp) == 1) {
            validInput = 1;
        } else {
            printf("Incorrect value");
        }

        while (getchar() != '\n');
    } while (!validInput);

    do {
        validInput = 0;
        printf("\nEnter current unit: ");
        scanf(" %c", &currentUnit);

        if (currentUnit == 'F' || currentUnit == 'C' || currentUnit == 'K') {
            validInput = 1;
        } else {
            printf("Incorrect value");
        }

        while (getchar() != '\n');
    } while (!validInput);

    do {
        validInput = 0;
        printf("\nEnter target unit: ");
        scanf(" %c", &targetUnit);

        if (targetUnit == 'F' || targetUnit == 'C' || targetUnit == 'K') {
            validInput = 1;
        } else {
            printf("Incorrect value");
        }

        while (getchar() != '\n');
    } while (!validInput);

    double targetTemp = conversion(currentTemp, currentUnit, targetUnit);

    printf("Temperature: %0.2lf \n"
    "Current Unit: %c \n"
    "Target Unit: %c \n"
    "Final Temperature: %0.2lf \n\n",
    currentTemp, currentUnit, targetUnit, targetTemp
    );


    return 0;
}