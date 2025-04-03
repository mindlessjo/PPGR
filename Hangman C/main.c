#include <stdio.h>
#include <string.h>

// #define

int main(void) {
    printf("Hangman V1.0!\n");

    // declares user input as the chosen word of the game
    char inputWord[20];
    printf("Enter the word for the game: ");
    scanf("%s", inputWord);
    getchar();

    // declares user input length of chosen word
    int lengthofWord = strlen(inputWord);

    // declares show blank spaces for length of word
    strcat(blankKey[lengthofWord], "");
    for (int i=0; i < lengthofWord; i++ ) {
        strcat(blankKey, "_");  // Append "_" to the string
    }

    // Hangman Guessing Loop
    int strike = 0;

    do {
        printf(blankKey);

    // looping input into spaces or counting incorrect inputs
        for (int i = 0; i < 7; i++) {

            printf("7 Guesses to end loop");
            strike++;
            i++;
        }


    } while (strcmp(blankKey, inputWord) != 0 || strike == 7); // compares the character arrays and the strike limit


    printf("THIS IS NOT A DRILL");
    return 0;
}
