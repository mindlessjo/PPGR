#include <stdio.h>

int main(void) {

    printf("Calendar V1.0\n\n");

    int day = 0, month = 0, year = 0;

    printf("Please provide the current date (MM/DD/YYYY):\t");

    if (scanf("%2d/%2d/%4d", &month, &day, &year) != 3) {
        printf("Invalid input! Please enter the date in MM/DD/YYYY format using numbers.\n");
        return 1; // Exit with an error code
    }

    printf("The current date is %02d/%02d/%04d.", day, month, year);

    return 0;
}