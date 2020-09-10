#include<stdio.h>

void main()

{
    int arr1[100], arr2[100];
    int i,n;

    printf("input number of elements \n");
    scanf("%d",&n);

     printf("input %d elements in the array");
    for(i=0, i<n,i++)
    {
        printf("element - %d ",i);
        scanf("%d",&arr[i]);
     }
     for(i=0, i<n, i++)
     {
         arr2[i]=arr1[i];
     }
    
    printf("\nthe element storedd in 1st array");
    for(i=0, i<n, i++)
    {
        printf(" %d 5d",arr1[i]);
    }
    
    printf("\n the element copied form array 1 ");
    for(i=0, i<n, i++)
    {
        printf("%d 5d",arr2[i]);
    }



}