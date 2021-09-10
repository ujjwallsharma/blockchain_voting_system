/* Header file for definition of Block*/

#ifndef BLOCKCHAIN_VOTING_SYSTEM_BLOCK_H
#define BLOCKCHAIN_VOTING_SYSTEM_BLOCK_H

typedef int hash;
typedef char *transaction;

/* Definition for block */

typedef struct Block_T {
   
    hash previous_block_hash;
    hash block_hash;
    transaction transactions;

}block_t;

#endif //BLOCKCHAIN_VOTING_SYSTEM_BLOCK_H
