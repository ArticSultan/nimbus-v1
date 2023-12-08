#include <time.h>
#include "core/account/account.h"

/* Transaction data type definition */
typedef struct {
    int txn_id;
    time_t datetime;
    double balance;
    Account source;
    Account beneficiary;
} txn;

/* Transaction interface */

/* @function
 * @name set_txn_id
 * ---------------------
 * @description Sets the transaction ID for the transaction in context
 * @param {txn*} ptrtxn
 * @returns {int} 0: Success | !=0: Failure;
 */
int set_txn_id(txn*);

/* @function
 * @name get_txn_id
 * ---------------------
 * @description Sets the balance for the transaction in context
 * @param {txn*} ptrtxn
 * @returns {int} 0: Success | !=0: Failure;
 */
int get_txn_id(txn*);

/* @function
 * @name set_txn_datetime
 * ---------------------
 * @description Sets the balance for the transaction in context
 * @param {txn*} ptrtxn
 * @returns {int} 0: Success | !=0: Failure;
 */
int set_txn_datetime(txn*);

/* @function
 * @name get_txn_datetime
 * ---------------------
 * @description Sets the balance for the transaction in context
 * @param {txn*} ptrtxn
 * @returns {int} 0: Success | !=0: Failure;
 */
int get_txn_datetime(txn*);

/* @function
 * @name set_txn_balance
 * ---------------------
 * @description Sets the balance for the transaction in context
 * @param {txn*} ptrtxn
 * @returns {int} 0: Success | !=0: Failure;
 */
int set_txn_balance(txn*);

/* @function
 * @name get_txn_balance
 * ---------------------
 * @description Retrieves the balance for the current transaction in context
 * @param {txn*} ptrtxn
 * returns {int} 0: Success | !=0: Failure
 */
int get_txn_balance(txn*);

/* @function
 * @name create_transaction
 * ---------------------
 * @description Sets the balance for the transaction in context
 * @param {txn*} ptrtxn
 * @returns {int} 0: Success | !=0: Failure;
 */
int create_transaction();

/* @function
 * @name retrieve_transaction
 * ---------------------
 * @description Creates a transaction in the current context
 * @param N/A
 * @returns {int} 0: Success | !=0: Failure;
 */
int retrieve_transaction(int*);

/* @function
 * @name update_transaction
 * ---------------------
 * @description Sets the balance for the transaction in context
 * @param {txn*} ptrtxn
 * @returns {int} 0: Success | !=0: Failure;
 */
int update_transaction(int*);

/* @function
 * @name cancel_transaction
 * ---------------------
 * @description Sets the balance for the transaction in context
 * @param {txn*} ptrtxn
 * @returns {int} 0: Success | !=0: Failure;
 */
int cancel_transaction(int*);