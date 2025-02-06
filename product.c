/*
   K.Ganesh
Description:
Date:
sample input:
sample output:
 */


#include<stdio.h>
#include<stdlib.h>

#include "main.h"

int product(Dlist **head1, Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **res1_h,Dlist**res1_t)
{
    //printf("start\n");
    Dlist*t1=NULL;
    Dlist*t2= *tail2;
    Dlist *res2h=NULL;
    Dlist *res2t=NULL;
    Dlist *res3h=NULL;
    Dlist *res3t=NULL;
    int shift=0;
    while(t2!=NULL)
    {	
	t1=*tail1;
	int res=0,carry=0;
	while(t1!= NULL)
	{

	    res=t1->data * t2->data + carry;
	    if(res>9)
	    {
		carry=res/10;
		res=res%10;
	    }
	    else
		carry=0;

	    insert_first(res1_h,res1_t,res);	    

	    //if(t1!=*head2)
	    t1=t1->prev;

	}
	if(carry>0)
	{
	    insert_first(res1_h,res1_t,carry);
	}


	for(int i=0;i<shift;i++)
	{
	    insert_last(res1_h,res1_t,0);
	}
	t2=t2->prev;
	add(res1_h,res1_t,&res2h,&res2t,&res3h,&res3t);

	//delete_list(&res2h,&res2t);

	res2h = res3h;
	res2t = res3t;
	res3h = res3t = NULL;


	delete_list(res1_h,res1_t);
	*res1_h=*res1_t=NULL;


	shift++;
    }
    if (res2h != NULL) {
	print_list(res2h);
	printf("\n");
    }
    return 0;
}
