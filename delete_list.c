/*
K.Ganesh
Description:
Date:
sample input:
sample output:
*/

#include<stdio.h>


#include "main.h"

int delete_list(Dlist **head, Dlist **tail)
{
    if(*head == NULL)                               // If head is NULL means List is already empty
	{
		return FAILURE;
	}

	Dlist *temp;                                    // Using Temp pointer to traverse through list and delete each node
	while(*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;                      // Every time updating next node adress to head
		free(temp);                                 // Freeing the memory allocated to deleted node
	}
	*tail = NULL;
	return SUCCESS;
}
