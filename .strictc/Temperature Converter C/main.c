#include <stdio.h>

double conversion(double currentTemp, char currentUnit, char targetUnit) {

    double result = 0;

    if (currentUnit == 'C') {
        if (targetUnit == 'C') {
            result = currentTemp;
        } else if (targetUnit == 'F') {
            result = (currentTemp * (9.0 / 5.0)) + 32;
        } else if (targetUnit == 'K') {
            result = currentTemp + 273.15;
        }
    } else if (currentUnit == 'F') {
        if (targetUnit == 'C') {
            result = (currentTemp - 32) * (5.0 / 9.0);
        } else if (targetUnit == 'F') {
            result = currentTemp;
        } else if (targetUnit == 'K') {
            result = (currentTemp - 32) * (5.0 / 9.0) + 273.15;
        }
    } else if (currentUnit == 'K') {
        if (targetUnit == 'C') {
            result = currentTemp - 273.15;
        } else if (targetUnit == 'F') {
            result = (currentTemp - 273.15) * (9.0 / 5.0) + 32;
        } else if (targetUnit == 'K') {
            result = currentTemp;
        }
    } else {
        printf("Improper Conversion Units Detected");
        return -1;
    }

    return result;
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
    "Target Unit: %c \n\n"
    "Converted Temperature: %0.2lf %c \n\n",
    currentTemp, currentUnit, targetUnit, targetTemp, targetUnit
    );


    return 0;
}