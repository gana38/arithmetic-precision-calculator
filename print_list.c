/*
K.Ganesh
Description:
Date:
sample input:
sample output:
*/

#include<stdio.h>

#include "main.h"
extern int sym;
void print_list(Dlist *head)
{
	/* Cheking the list is empty or not */
	if (head == NULL)
	{
		printf("INFO : List is empty\n");
	}
	else
	{
	    //printf("Head -> ");
	    while (head)		
	    {
		    /* Printing the list */
		    printf("%d", head -> data);

		    /* Travering in forward direction */
		    head = head -> next;
		    /*if (head)
		        printf("> ");*/
	    }
    	//printf(" Tail\n");
    }
}
