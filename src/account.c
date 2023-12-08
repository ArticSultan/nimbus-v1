#include "account.h"
#include "user.h"
#include <stdio.h>
#include <stdlib.h>

/* @Global Var */
total_bank_accounts = 0; // Keeps track of total number of bank account have been opened.

/* @function
 * @name generate_account_number
 * -----------------------------
 * @description Generates a unique account number
 * @returns {long} account_number
 */
long generate_account_number() 
{
	int padding = 0000;
	int signature = 8888;
	char* salt = "mcdougal"; // convert string to int
	char* pepper = "supercalfragilsticexpialidoshus_coolerThanApolarBearsToeNail"; // convert string to int
	long account_number = padding + atoi(*salt) + atoi(*pepper) + signature ;
	return account_number;
}

/* @function
 * @name set_account_number
 * ------------------------
 * @description Sets account number of the given account.
 * @param {Account*}
 * @returns {int} 0: success
*/
int set_account_number(Account *account) 
{
	// calls generate_account_number function
	// assigns return value to a struct field 
    account->account_number = generate_account_number();
    printf("Account number is set!\n"); // confirmation print statement
	printf("Account number is: %ld\n", account->account_number); // verification print statement
    return 0; // return statement
}

/* @function
 * @name get_account_number
 * ------------------------
 * @description Retrieves the account number of the the given account
 * @param {Account*}
 * @returns {int} 0: success
*/
int get_account_number(Account *account)
{
	printf("Account number is: %ld", account->account_number);
	return 0;
}

int set_account_balance(Account *account, double settled_amt) 
{
    account->account_balance = &settled_amt;
    printf("Account %d, has been updated! ", account->account_number);
    printf("and has an available balance of %f\n", account->account_balance);
    return 0;
}

int get_account_balance(Account *account) 
{
	printf("Account %ld has an available balanace of: %lf", account->account_number, account->account_balance);
	return 0;
}

int set_account_type(Account *account) 
{
    int option;
	enum ACCOUNT_TYPE account_type;
    printf("Select which type of account to initialize: \n");
    printf("Press 1 for 'checkings'");
    printf("Press 2 for 'Savings'");
    printf("Press 3 for 'Investment'");
    printf("Press 4 for 'Escrow'");
    fgets(&option, 1, stdin);
	switch(option) {
		case 1:
			account_type = 0;
			account->account_type = account_type;
			break;
		case 2:
			account_type = 1;
			account->account_type = account_type;
			break;
		case 3:
			account_type = 2;
			account->account_type = account_type;
			break;
		case 4:
			account_type = 3;
			account->account_type = account_type;
			break;
	}
    return 0;
}

int get_account_type(Account *account)
{
	printf("Account: %ld is a %s account!", account->account_number, account->account_type);
	return 0;
}

int set_account_pin(Account *account) 
{
	int option;
	printf("Enter the desired pin for your account: ");
	fgets(&option, 7, stdin);
	account->account_pin;
    return 0;
}

int get_account_pin(Account *account)
{
	printf("%d", account->account_pin);
	return 0;
}


 /*
 Account get_account(User user, Account *account) 
{

    return account;
}
*/

int account_init() 
{
	total_bank_accounts = total_bank_accounts + 1;
    Account new_account;
    double initial_balance = 0.00;
    set_account_number(&new_account);
    set_account_type(&new_account);
    set_account_pin(&new_account);
    set_account_balance(&new_account, initial_balance);
    return 0;
}

int add_account(User *user)
{
	/* data */
}