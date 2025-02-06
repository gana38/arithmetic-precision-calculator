/*
   K.Ganesh
Description:
Date:
sample input:
sample output:
 */

#include<stdio.h>
#include "main.h" 

int sym;
extern int flag;
int sub(Dlist **head1, Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **res_h,Dlist**res_t)
{
    Dlist *t1=*head1;
    int count1=0,sym=0;
    while(t1!=NULL)
    {
	count1++;
	t1=t1->next;
    }

    //printf("c1=%d\n",count1); 
    Dlist *t2=*head2;
    int count2=0;
    while(t2!=NULL)
    {
	count2++;
	t2=t2->next;
    }
    if(flag==1)
    {
	sym=1;
    }
    //printf("c2=%d\n",count2); 
    //printf("ga\n");
    if(count1<count2)
    {
	//printf("gana\n");

	sym=1;
	if(flag==1)
	{
	    sym=0;
	}

	Dlist* temp=*head1;
	*head1 = *head2;
	*head2 = temp;

	temp = *tail1;
	*tail1 = *tail2;
	*tail2 = temp;

	//	printf("if");	
    }
    else if(count1==count2)
    {
	if(comp(&*head1,&*tail1,&*head2,&*tail2))
	{

	    sym=1;
	    if(flag==1)
	    {
		sym=0;
		}
		Dlist*temp=*head1;
		*head1=*head2;
		*head2=temp;

		temp=*tail1;
		*tail1=*tail2;
		*tail2=temp;
	    }

	}

	t1=*tail1;
	t2=*tail2;
	int barrow=0;
	int res=0;
	while(t1!=NULL)
	{
	    int num2=0,num1=0;
	    if(t2!=NULL)
	    {
		num2=t2->data;
	    }

	    if(t1!=NULL)
		num1=t1->data;

	    if(barrow==1)
	    {
		num1=num1-1;
	    }

	    if(num1>num2)
	    {
		//res=t1->data-t2->data;
		barrow=0;
	    }
	    else if(num1< num2)
	    {
		barrow=1;
		num1=num1+10;
	    }
	    //printf("res=%d",res);	
	    res=num1-num2;
	    insert_first(&*res_h,&*res_t,res);

	    if(t1!=NULL)
		t1=t1->prev;
	    if(t2!=NULL)
		t2=t2->prev;	      
	}
	if(sym==1)
	{
	    printf("-");
	}
	return SUCCESS;

    }


    int comp(Dlist **head1, Dlist **tail1,Dlist **head2,Dlist **tail2)
    {
	Dlist*t1=*head1;
	Dlist*t2=*head2;

	while(t1!=NULL)
	{
	    if(t1->data < t2->data)
	    {
		return 1;
	    }
	    else if(t1->data > t2->data)
	    {
		return 0;
	    }
	    else
	    {
		t1=t1->next;
		t2=t2->next;
	    }
	}
	return 0;
    }




