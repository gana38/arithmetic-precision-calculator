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
#include<string.h>
int flag=0;
int main(int argc,char *agrv[])
{

    Dlist *head1 = NULL; /* initialize the header to NULL */
    Dlist *tail1 = NULL; /* initialize the tail to NULL */
    Dlist *head2 = NULL; /* initialize the header to NULL */
    Dlist *tail2 = NULL; /* initialize the tail to NULL */
    Dlist *res_h = NULL; /* initialize the header to NULL */
    Dlist *res_t = NULL; /* initialize the tail to NULL */

	int i=0;
    if(agrv[1][0]=='-')
    {
	i=0;
	while(agrv[1][i+1]!='\0')
	{
	    agrv[1][i]=agrv[1][i+1];
	    i++;
	}
	if(agrv[2][0]=='+')
	{
	    if(agrv[3][0]!='-')
	    {
		flag=1;
		agrv[2][0]='-';

	    }
	    else if(agrv[3][0]=='-')
	    {
		i=0;
		while(agrv[1][i+1]!='\0')
		{
		    agrv[1][i]=agrv[1][i+1];
		    i++;
		}	
		  agrv[2][0]='+';
		  flag=1;
	    }
	}
	else if(agrv[2][0]=='-')
	{


	}

    }

    store_list(agrv[1],&head1,&tail1);
    store_list(agrv[3],&head2,&tail2);

    //Dlist *temp= head1;

    switch(agrv[2][0])
    {
	case '+':
	    print_list(head1);
	    printf("+");
	    print_list(head2);
	    add(&head1,&tail1,&head2,&tail2,&res_h,&res_t);
	    printf("=");
	    print_list(&*res_h);
	    printf("\n");
	    break;
	case '-': 
	    print_list(head1);
	    printf(" - ");
	    print_list(head2);	
	    printf("=");
	    sub(&head1,&tail1,&head2,&tail2,&res_h,&res_t);
	    print_list(&*res_h);
	    printf("\n");
	    break;
	case 'x': 
	    print_list(head1);
	    printf(" x ");
	    print_list(head2);	
	    printf("=");
	    product(&head1,&tail1,&head2,&tail2,&res_h,&res_t);
	    printf("\n");
	    //print_list(&*res_h);
	    break;
	case '/':
	    print_list(head1);
	    printf(" / ");
	    print_list(head2);	
	    printf("=");
	    if(strcmp(agrv[3],"0")==0)
	    {
		printf(" Undefined\n");
		return 0;
	    }
	    division(&head1,&tail1,&head2,&tail2,&res_h,&res_t);
	    print_list(&*res_h);
	    printf("\n");
	    break;


    }


}

