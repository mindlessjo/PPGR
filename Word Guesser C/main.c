#include <stdio.h>
#include <string.h>

// Loop for  underline count
void underlining(size_t userWordLength) {
    for (int i = 0; i < userWordLength; i++) {
        printf("_");
    }
}

int main(void) {
    printf("Word Guesser V1.0\n");
    printf("Enter the chosen word to guess: ");

    // Take user input and store it in a variable
    char userWord[20] = "";
    scanf("%20s", userWord);

    // Take the length of the user input and store it in a variable
    size_t userWordLength = strlen(userWord);

    // Create a loop that takes user input until it matches the desired word
    char userInput[20] = "";
    int attempts = 1;
    do {

        printf("Attempt #%d  ", attempts);
        underlining(userWordLength);

        printf("\nEnter Guess: ");
        scanf("%s", userInput);

        attempts++;
    } while (strcmp(userWord, userInput) != 0 && attempts <= 5);

    return 0;
}