/* Header file of linked list functions */

#ifndef BLOCKCHAIN_VOTING_SYSTEM_LINKEDLIST_H
#define BLOCKCHAIN_VOTING_SYSTEM_LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include "block.h"

typedef struct {
    block_t info;
} DATA;

typedef struct node {
    DATA data;
    struct node* next;
} NODE;

void init(NODE** head);
NODE* add(NODE* node, DATA data);
void print_list(NODE* head);
void print_winner(int bjp, int inc, int aap);
NODE * reverse(NODE * node);

#endif //BLOCKCHAIN_VOTING_SYSTEM_LINKEDLIST_H
