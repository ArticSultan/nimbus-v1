#include "user.h"

/* Account type enum definition*/
enum ACCOUNT_TYPE {
    CHECKINGS,
    SAVINGS,
    INVESTMENT,
    ESCROW,
};

/* Account data type definition */
typedef struct {
    enum account_type *account_type;
    double *account_balance;
    int *account_number;
    int *account_pin;
} Account;

/* global variable definitions */
/* keep track of the total number of bank accounts opened */
int total_bank_accounts; 

/* Acount Interface */
/* @Function 
 * @name set_account_type
 * ----------------------
 * @description Sets the account type of a given account
 * @param {Account*}
 * @returns 0:Success
 */
int set_account_type(Account*);

/* @Function
 * @name get_account_type
 * ----------------------
 * @description Retrieves the account type of a given account
 * @param {Account*}
 * @returns 0:Success
 */
int get_account_type(Account*);

/* @Function
 * @name set_account_number
 * ------------------------
 * @description Sets the account number of a given account
 * @param {Account*}
 * @returns 0:Success
 */
int set_account_number(Account*);

/* @Function
 * @name get_account_number
 * ------------------------
 * @description Retrieves the account number of a given account
 * @param {Account*}
 * @returns 0:Success
 */
int get_account_number(Account*);

/* @Function
 * @name set_account_pin
 * ---------------------
 * @description Sets the given accounts pin number
 * @param {Account*}
 * @returns 0:Success
 */
int set_account_pin(Account*); 

/* @Function
 * @name get_account_pin
 * ---------------------
 * @description Retrieves the pin number of a given account
 * @param {Account*}
 * @returns 0:Success
 */
int get_account_pin(Account*);

/* @Function
 * @name set_account_balance
 * ---------------------
 * @description Sets the balance of a given account
 * @param {Account*, double}
 * @returns 0:Success
 */
int set_account_balance(Account*, double);

/* @Function
 * @name get_account_balance
 * ---------------------
 * @description Retrieves the balance of a given account
 * @param {Account*}
 * @returns 0:Success
 */
int get_account_balance(Account*);

/* @Function
 * @name add_account
 * ---------------------
 * @description Adds account to user account list
 * @param {User*}
 * @returns 0:Success
 */
int add_account(User*);

/* @Function
 * @name generate_account_number
 * ---------------------
 * @description Generates long integer account number
 * @param {N/A}
 * @returns {long}
 */
long generate_account_number();