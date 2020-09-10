#include<stdio.h>
 void main ()
 {
     int a,b;
     printf("enter yout no. \n");
     scanf("%d",&a);
     b = a % 2;
    if(b==0)
     printf("is even number",a);
    else
     printf("is odd number",a);
   
 }