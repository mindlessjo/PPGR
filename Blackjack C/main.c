#include <stdio.h>
#include <string.h>


// function for dealing cards to players hand
int deal(int playerHand) {


    return 1;
}

// function for win condition and score comparison
void scoreCompare() {

};

//main function handling looping
int main(void) {
    printf("Blackjack V2.0!\n");
    printf("Enter 'hit' or 'stand' respectively\n\n");

    int inputValue = 0;     // Checks user input for loop condition



    do {
        char userInput[5];
        int playerHand;
        int opponentHand;
        int bust = 21;

        printf("Hit or Stand?: ");
        scanf("%s", userInput);

        // Checks if comparison between user input and the specified string is true
        //strcmp true is 0
        if (strcmp(userInput, "hit") == 0) {
            printf(deal(playerHand));
            inputValue = 1;
        } else if (strcmp(userInput, "stand") == 0) {
            inputValue = 0;
        } else {
            printf("Please enter \"hit\" or \"stand\" \n");
            inputValue = 1;
        }
    } while (inputValue);


    return 0;
}