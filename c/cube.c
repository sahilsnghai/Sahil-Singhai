#include<stdio.h>

void main ()
{
    int a, b;
    printf("input the number ",a);
    scanf("%d",&b);
    for(a=1;a<=b;a++)
    {
        printf("number is:%d and cube of the %d is: %d\n",a,a,(a*a*a));
    }

}