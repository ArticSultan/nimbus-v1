#include "transaction.h"

int set_txn_id(txn *tx) {
    /* data */
}

int get_txn_id(txn *tx) {
    /* data */
}

// Urban legends
int set_txn_datetime(txn *tx) {
    time_t cur_time;
    time(&cur_time);
    tx->datetime = (&cur_time);
    return 0;
}

int get_txn_datetime(txn*) {
    /* data */
}

int set_txn_balance(txn*) {
    /* data */
}

int get_txn_balance(txn*) {
    /* data */
}

int create_transaction() {
    txn tx;
    set_txn_id(&tx);
    set_txn_datetime(&tx);
    set_txn_balance(&tx);
    return 0;
}

int retrieve_transaction(int *txn_id) {
    return 0;
}

int update_transaction(int *txn_id) {
    return 0;
}

int cancel_transaction(int *txn_id) {
    return 0;
}