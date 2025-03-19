#include <stdio.h>
#include <string.h>

int deal(int playerHand,int opponentHand) {

    return (playerHand, opponentHand);
}

void scoreCompare() {

};

int main(void) {
    printf("Blackjack V2.0!\n");
    printf("Enter 'hit' or 'stand' respectively\n\n");

    int inputValue = 0;


    do {
        char userInput[5];
        int playerHand;
        int opponentHand;
        int bust = 21;

        printf("Hit or Stand?: ");
        scanf("%s", userInput);

        if (strcmp(userInput, "hit") == 0) {
            inputValue = 1;
        } else if (strcmp(userInput, "stand") == 0) {
            inputValue = 0;
        }
    } while (inputValue);


    return 0;
}