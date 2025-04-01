#include <stdio.h>

int main(void) {
    printf("Countdown Timer V1.0\n");

    int startNumber;
    int stopNumber = 0;

        printf("Enter starting number: ");
        scanf("%d", &startNumber);

        for (int currentNumber = startNumber; startNumber > stopNumber;startNumber--) {
            printf("Timer: %d\n", currentNumber);
            currentNumber--;
        }
    return 0;
}