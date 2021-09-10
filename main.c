/* Program to generate a Voting System based on blockchain technology using linked list
 *
 * Compilation : gcc -o blockchain main.c hash.c linkedlist.c
 * Execution : ./blockchain
 *
 * @Ujjwal, 1910991390, Project Started on : 01.09.2021
 * Project in C
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "block.h"
#include "linkedlist.h"

int candidate = 1;

hash string_hash(void *string);

/* Functions to color the texts */

void yellow() {

    printf("\033[0;33m");
    return;
}
void red() {

    printf("\033[0;31m");
    return;    
}

void green() {

    printf("\033[0;32m");
    return;
}

void reset() {

    printf("\033[0m");
    return;
}

typedef enum party_code_t {BJP_PARTY, INC_PARTY, AAP_PARTY, MAX_PARTIES} party_code;

char *party_name[MAX_PARTIES] = {"BJP_PARTY", "INC_PARTY", "AAP_PARTY"};

/* Function to get votes from the candidates */

static party_code get_vote()
{
    int choice;
	
    green();
    printf("\n%*sHello! Candidate %d !\n\n",50,"",candidate);
    reset();
    printf("%*s1. BJP (Bhartiya Janta Party)\n",50,"");
    printf("%*s2. INC (Indian National Congress)\n",50,"");
    printf("%*s3. AAP (Aam Aadmi Party)\n\n",50,"");
    red();
    printf("%*sPress 0 to end the Voting\n\n",50,"");
    reset();
    printf("%*sEnter the respective number of party you want to vote to : ",50,"");
    scanf("%d",&choice);
    system("clear");

    candidate++;
    return choice-1;
}

int main()
{
    system("clear");
    NODE *head;
    DATA genesis_element;
    init(&head);
	
    yellow();
    printf("\n\n%*s!!!!!!! Welcome to Virtual Electronic Voting Machine !!!!!!!\n",50," ");
    reset();

    // Generating Votes and storing the data as a separate block in blockchain

    int i,index = 0;
    int bjp = 0, inc = 0, aap = 0;
    int previous_hash = genesis_element.info.previous_block_hash;

    transaction trans_list = (transaction) malloc(candidate * sizeof(char)*1000); // Allocating memory
    
    // Working of EVM

    while(index != -2) {

        DATA *element = malloc(sizeof(DATA));
        block_t *b = malloc(sizeof(block_t));

        index = get_vote();
        transaction t = {party_name[index]};
        if(index == 0)
        {
            bjp++;
	    yellow();
	    printf("%*sThank You for Voting!\n\n",65,"");
            reset();
	}
	else if(index == 1)
        {
            inc++;
	    green();
            printf("%*sThank You for Voting!\n\n",65,"");
            reset();
	}
	else if(index == 2)
        {
            aap++;
	    red();
            printf("%*sThank You for Voting!\n\n",65,"");
            reset();
	}
	else if(index == -1)
        {
            print_list(head);
            print_winner(bjp,inc,aap);
            return 0;
        }
	else
	{
	    printf("INVALID INPUT, EXITING THE EVM...\n\n");
	    exit(0);
	}

	//Storing Voting data as a particular block

        strcat(trans_list, t);
        b->previous_block_hash = previous_hash;
        b->block_hash = string_hash(trans_list);
        b->transactions = t;
        element->info = *b;
        previous_hash = b->block_hash;
        head = add(head, *element);
    }
}
