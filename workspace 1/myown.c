#include<stdio.h>
#include<stdlib.h>

struct node
{
    int x;
    struct node *next ;

}*start;

void create(int x)
void display();

int main()
{
    int num, i;
 printf("-------------------------------------------------------\n");
 printf("enter number of node: ");
 scanf("%d",num);
 create(num);
 printf("enter the data: ");
 display();
 }

 void create(int x)
 {
     struct node *fn, *ptr;
     ptr=(struct node *)malloc(sizeof(struct node));

     if(ptr==NULL)
     Printf("memory can be allocated: ");
     else
     {
         printf("Input data for node 1: ");
         scanf("%d",x);
         start->x=x;
         start->next=NULL;
         fn->start;

         for(i=)

     }
     
 }