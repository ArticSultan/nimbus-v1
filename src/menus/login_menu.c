#include <stdio.h>
#include <stdlib.h>

int login_menu() {
    int UN_MAX_LIMIT = 100;
    int PW_MAX_LIMIT = 21;
    char proposed_username[UN_MAX_LIMIT];
    char proposed_password[PW_MAX_LIMIT];
    printf("Login Screen\n");
    printf("Enter User name: \n");
    fgets(proposed_username, UN_MAX_LIMIT, stdin);
    printf("Enter Password: \n");
    fgets(proposed_password, PW_MAX_LIMIT, stdin);
    // Iterate through list of Users and validate that login credentials match what was used to login;
    printf("Login successful!\n");
    return 0;
}