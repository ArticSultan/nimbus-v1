int account_menu() {
    int selection;
    printf("1 . . . Create New Account\n");
    printf("2 . . . Send Money\n");
    printf("3 . . . Transfer Funds\n");
    printf("0 . . . Exit\n");
    switch(selection) {
        case 0:
            main_menu();
            break;
        case 1:
            account_init();
    }
    return 0;
}