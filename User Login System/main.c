#include <stdio.h>

int main(void) {
    printf("User Login Password\n");

    char username[15];
    printf("Enter Username (14 character maximum) :");
    fgets(username, sizeof(username), stdin);
    getchar();

    char password[15];
    printf("Enter Password: ");
    fgets(password, sizeof(password), stdin);
    getchar();

    printf(
           "Login: "
           "%s \n"
           "Password: "
           "%s \n",
           username, password);

    return 0;


}