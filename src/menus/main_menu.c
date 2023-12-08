#include "core/user/user.h"
#include <stdlib.h>
#include <stdio.h>

int main_menu() {
    char x;
    int login_status;
    User *user;
    printf("Main Menu: \n");
    printf("1 . . . Login\n");
    printf("2 . . . Register New User\n");
    printf("0 . . . Exit\n");
    fgets(&x, 100, stdin);
    int converted_x = strtol(&x, NULL, 10); 
    
    switch(converted_x) {
        case 0:
            exit(0);
            break;
        case 1:
            login_status = login_menu();
            if (login_status == 0) {
                account_menu();
            };
            break;
        case 2:
            user = user_factory();
            printf("%x", user);
            break;
    }
    return 0;
}