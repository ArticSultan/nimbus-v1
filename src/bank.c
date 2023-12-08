#include "core/menus/main_menu.c"

#define SUCCESS 0;
#define FAILURE -1;

// Global variables
int total_bank_accounts;

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    printf("Welcome to the Bank of McDougal\n");
    total_bank_accounts = 0;
    main_menu();
    return 0;
}