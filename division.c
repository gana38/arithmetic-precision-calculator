/*
K.Ganesh
Description:
Date:
sample input:
sample output:
*/

#include<stdio.h>
#include<stdlib.h>
#include"main.h"

int division(Dlist **head1, Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **res_h,Dlist**res_t)
{
    Dlist *temp=*head2;
    Dlist *res1=*head1;
    Dlist *ret=*head1;
    Dlist *result=*res_h;
    int num2=0;
    while(temp!=NULL)
    {
	num2=num2*10+temp->data;
	temp=temp->next;
    }
    int num1=0;
    while(ret)
    {
	num1=num1*10 + ret ->data;
	ret=ret->next;
    }
    if(num1<num2)
    {
	insert_last(res_h,res_t,0);
	return SUCCESS;

    }
    if(num1==num2)
    {
    
	insert_last(res_h,res_t,1);
	return SUCCESS;
    }
    int t=0;
    int s=0;
    while(res1)
    {
	t=t*10+res1->data;
	s=t;
	int count =0;
	while(s>=num2)
	{
	    s=s-num2;
	    count++;
	}
	t=s;
	insert_last(res_h,res_t,count);
	res1=res1->next;
    }
    while(*res_h)
    {
	if((*res_h)->data==0)
	{
	    (*res_h)=(*res_h)->next;
	}
	else if((*res_h)->data!=0)
	{
	    return SUCCESS;
	}
    }
    return SUCCESS;
}

    

