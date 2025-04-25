#include <stdio.h>
#include <string.h>

void clearstdin() {
    int x;
    while ((x = getchar()) != '\n' && x != EOF);
}

int main(void) {
    printf("User Login Password\n");


    char username[15];
    printf("Enter Username (14 character maximum): ");
    fgets(username, sizeof(username), stdin);

    if (username[strlen(username) - 1] != '\n') {
        clearstdin();
    } else {
        username[strlen(username) - 1] = '\0';
    };


    char password[15];
    printf("Enter Password: ");
    fgets(password, sizeof(password), stdin);

    if (password[strlen(password) - 1] != '\n') {
        clearstdin();
    } else {
        password[strlen(password) - 1] = '\0';
    };

    printf(
           "Login: "
           "%s \n"
           "Password: "
           "%s \n",
           username, password);

    return 0;


}
