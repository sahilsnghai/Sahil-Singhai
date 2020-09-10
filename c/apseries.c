#include<stdio.h>

void main ()
{
    int i, n2, n1, df, ln;
    int s1=0;
    printf("input the starting number of ap series ");
    scanf("%d",&n1);
    printf("input the number of series ");
    scanf("%d",&n2);
    printf("input the common difference of series ");
    scanf("%d",&df);
    
    s1 = ( n2 * ( 2 * n1 + ( n2 -1 ) * df ) )/ 2;
    ln = n1 + (n2-1) * df;
    printf("\nThe Sum of the  A.P. series are : \n");

    for(i=n1;i<=ln; i= i + df )
    {
         if (i != ln)
             printf("%d + ",i);
         else
             printf("%d = %d \n\n",i,s1);
    }
}