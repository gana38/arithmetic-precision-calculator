/*
K.Ganesh
Description:
Date:
sample input:
sample output:
*/

#include"main.h"
#include<stdio.h>

extern int flag;
int add(Dlist **head1, Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **res_h,Dlist**res_t)
{
    Dlist *t1=*tail1;
    Dlist *t2=*tail2;

    int num1,num2,carry=0,res;


    while(t1!=NULL || t2!=NULL)
    {
	//carry=0;

	if(t1==NULL)
	    num1=0;
	else
	    num1=t1->data;

	if(t2==NULL)
	    num2=0;
	else
	    num2=t2->data;

	res=num2+num1+carry;
	Dlist*new=malloc(sizeof(Dlist));
	carry=0;

	if(res>9)
	{
	    carry= res/10;
	    res=res%10;
	    insert_first(&*res_h,&*res_t,res);
	}
	else
	{	
	    insert_first(&*res_h,&*res_t,res);
	}	
	if(t1!=NULL)
		t1=t1->prev;
	if(t2!=NULL)
		t2=t2->prev;
    }
    if(carry!=0)
    {
	insert_first(&*res_h,&*res_t,carry);
	}
    if(flag==1)
	printf("-");
}





