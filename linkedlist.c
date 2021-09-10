/* source file to implement the basic linked list functions declared in linkedlist.h header file*/

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

/* Function to reverse the linked list*/

NODE * reverse(NODE * node) {
   
    NODE * temp;
    NODE * previous = NULL;
    
    while (node != NULL) {
        
	temp = node->next;
        node->next = previous;
        previous = node;
        node = temp;
    }
    
    return previous;
}

/* Function to initialize the blockchain*/

void init(NODE** head) {
    
    *head = NULL;
}

/* Function to add a block/node to blockchain/linkedlist */

NODE* add(NODE* node, DATA data) {
   
    NODE* temp = (NODE*) malloc(sizeof (NODE));
   
    if (temp == NULL) {
        exit(0); // no memory available
    }
   
    temp->data = data;
    temp->next = node;
    node = temp;
   
    return node;
}

/* Function to print the Blockchain based votes submission */

void print_list(NODE* head) {
   
    head = reverse(head);
    NODE * temp;
   
    printf("VOTING RESULT (BLOCKCHAIN)\n");
    printf("======================== \n");
   
    for (temp = head; temp; temp = temp->next)
    {
        printf("Previous hash\t%d\n", temp->data.info.previous_block_hash);
        printf("Block hash\t%d\n", temp->data.info.block_hash);
        printf("Transaction\t%s\n", temp->data.info.transactions);
        printf("\n\n");
    }

    printf("\r\n");
}

/* Function to print the winner based on higher number of votes */

void print_winner(int bjp, int inc, int aap) {

    printf("\033[0;33m");
	
    if(bjp > inc && inc >= aap) {
    
        printf("BJP WINS WITH %d VOTES\n\n", bjp);
    }
    else if(inc > bjp && bjp >=aap) {
    
        printf("INC WINS WITH %d VOTES\n\n", inc);
    }
    else if(aap > inc && inc >= bjp) {
    
        printf("AAP WINS WITH %d VOTES\n\n", aap);
    }
    else if(aap == bjp && bjp == inc && aap > 0) {
        
	printf("THERE IS A TIE BETWEEN ALL PARTIES\n\n");    
    }
    else if(inc == bjp && aap < inc)
    {
	printf("There is a Tie between BJP and INC");
    }
    else if(aap == bjp && inc < aap)
    {
	printf("There is a tie between AAP and BJP");
    }
    else if(inc == aap && bjp < aap)
    {
	printf("There is a tie between INC and AAP");
    }
    else {
    
        printf("NO VOTING HAS BEEN DONE! \n\n");
    }

    printf("\033[0;m");
}
