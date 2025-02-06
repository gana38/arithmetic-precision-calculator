/*
K.Ganesh
Description:
Date:
sample input:
sample output:
*/

#include<stdio.h>
#include "main.h"
#include<stdlib.h>

int store_list(char* str,Dlist**head,Dlist **tail)
{
	int i=0,res;
	while(str[i]!='\0')
	{
	    res=str[i]-48;
	    insert_last(&*head,&*tail,res);
		i++;
	}
	return SUCCESS;

}

int insert_last(Dlist **head, Dlist **tail, int data)
{
	Dlist *new = malloc(sizeof (Dlist));

	// If the node is not created the returning failure
	if (!new)
	{
		return FAILURE;
	}
	new -> data = data;
	new -> prev = NULL;
	new -> next = NULL;

	// If the list is empty then inserting the node as first node
	if (!*head && !*tail)
	{	
		*head = *tail = new;
		return SUCCESS;
	}
	new -> prev = *tail;
	(*tail) -> next = new;
	*tail = new;
	return SUCCESS;

}

int insert_first(Dlist **head, Dlist **tail, int data)
{
    Dlist*new=malloc(sizeof(Dlist));
    if(new==NULL)
    return FAILURE;
	

    new->data=data;
    new->prev=NULL;
    new->next=NULL;

    if(*head==NULL)
    {
     *head=new;
     *tail=new;
     return SUCCESS;
    }
    else
    {
        Dlist*temp=*head;
        *head=new;
        temp->prev=new;
        new->next=temp;
        return SUCCESS;
    }
    return FAILURE;

}
