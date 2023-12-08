#include "user.h"
#include <stdlib.h>
#include <stdio.h>

#define SUCCESS 0


// user name
int set_user_name(User *user) {
    char desired_username[100];
    printf("\nEnter desired username: ");
    fgets(desired_username, 100, stdin);
    printf("Desired Username: %s", desired_username);
    user->user_name = desired_username;
    printf("Desired Username is set!\n");
    return SUCCESS;
}

int get_user_name(User *user) {
    printf("User name: %s\n", user->user_name);
    return 0;
}
// user email
int set_email_address(User *user) {
    char email_address[100];
    printf("Enter email address: ");
    fgets(email_address, 100, stdin);
    printf("Email address: %s", email_address);
    user->email_address = email_address;
    printf("Email address has been successfully!\n");
    return SUCCESS;
}

int get_email_address(User *user) {
    printf("Email address: %s\n", user->email_address);
    return 0;
}

//  user password
int set_password(User *user) {
    char password[100];
    printf("Enter password: ");
    fgets(password, 100, stdin);
    user->password = password;
    printf("Password has been set!\n");
    return SUCCESS;
}

int get_password(User *user) {
    printf("Password: %s\n", user->password);
    return 0;
}

int User_init(User *user) {
    set_user_name(user);
    set_email_address(user);
    set_password(user);
    return 0;
}

User user_factory() {
    User user;
    User_init(&user);
    return user;
}