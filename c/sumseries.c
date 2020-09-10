#include<stdio.h>

int main ()
{
  float x,sum,no_row;
  int i, n;
  printf("input the value of x: ");
  scanf("%d",&x);
  printf("input number of term: ");
  scanf("%d",&n);
  sum=2; no_row=3;
for(i=1;i<n;i++)
{
    no_row = no_row*x/(float)i;
    sum =sum+ no_row;
}
printf("\nThe sum is: %f\n",sum);
}