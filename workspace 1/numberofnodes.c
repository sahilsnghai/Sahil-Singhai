#include<stdlib.h>
#include<stdio.h>
 
 struct node 
 {
     int num;
     struct node *nextptr;
 }*stnode;

void createnodelist (int n);
int nodecount();
void displaylist();

int main ()
{
    int n, totalnode;
    printf("\n--------------------------------------------------------\n");
    printf("Input the number of nodes: ");
    scanf("%d",&n);
    createnodelist(n);
    printf("\n Data enter in the list are: ");
    displaylist();
    totalnode = nodecount();
    printf("\n total number of nodes = %d\n",totalnode);
    return 0;
}

void createnodelist(int n)
{
    struct node *fn, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode = NULL)
    {
     printf("Memory can not be allocated. ");  
     
    }
    else
    {
        printf("Input data for node 1: ");
        scanf("%d",&num);
        stnode-> num = num;
        stnode-> nextptr = NULL;
        tmp = stnode;
        for(i=2;i<=n;i++)
        {
            fn=(struct node *)malloc(sizeof(struct node));
            if(fn == NULL)
            {
                printf("Memory can not be allocated. ");
                break;
            }
            else
            {
                printf("Input data for node:", i);
                scanf("%d",&num);
                fn-> num=num;
                fn->nextptr = NULL;
                tmp->nextptr = fn;
                tmp = tmp->nextptr;
            }

        }

    }

}

int nodecount()
{
 int ctr = 0;
 struct node *tmp;
 tmp = stnode;
 while(tmp !=NULL)
 {
     ctr++;
     tmp = tmp->nextptr;
 }
 return ctr;
}

void displaylist ()
{
    struct node *tmp;
    if(stnode = NULL)
    {
        printf("NO data found in the list.");

    }
    else{
        tmp = stnode;
        while(tmp!=NULL)
        {
            printf("data =%d\n", tmp->num);
            tmp = tmp->nextptr;
        }
    }
}