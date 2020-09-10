#include<stdio.h>
#include<math.h>

void main()
{
    int n, i, sum=0;
    
    printf("input the numbers of terms= ");
    scanf("%d",&n);
    printf("\nThe square natural upto %d terms are :",n);
    for (i=1; i<=n; i++)
    {
      printf("%d ",i*i);
      sum+=i*i;
    }
    printf("\nthe sum of series: %d \n",sum);
}