#ifndef main_h
#define main_h
#include<stddef.h>
#include<stdlib.h>

typedef struct Dlist
{
    struct Dlist *prev;
    struct Dlist *next;
    int data;
}Dlist;

#define SUCCESS 0
#define FAILURE -1
#define LIST_EMPTY -2
#define DATA_NOT_FOUND -3


int add(Dlist **head1, Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **res_h,Dlist**res_t);

int sub(Dlist **head1, Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **res_h,Dlist**res_t);

int product(Dlist **head1, Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **res_h,Dlist**res_t);

int division(Dlist **head1, Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **res_h,Dlist**res_t);

int store_list(char*str,Dlist**head,Dlist **tail);

int insert_last(Dlist **head, Dlist **tail, int data);

int delete_list(Dlist **head, Dlist **tail);

int insert_first(Dlist **head, Dlist **tail, int data);

void print_list(Dlist *head);

int comp(Dlist **head1, Dlist **tail1,Dlist **head2,Dlist **tail2);
#endif


