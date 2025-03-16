#include <stdio.h>

int main(void) {

    printf("Calendar V1.0\n\n");

    int day = 0, month = 0, year = 0;
    printf("Please provide the current date (MM/DD/YYYY):\t");
    scanf("%2d %2d %4d", &day, &month, &year);

    printf("The current date is %2d/%2d/%4d.", day, month, year);

    return 0;
}