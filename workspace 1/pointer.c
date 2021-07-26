#include<stdio.h>
int main(){
    int i =33;
    int *j =&i;
    printf("the value of i is  %d\n",i);
    printf("the value of i is  %d\n",*j);
    printf("the value of i is  %d\n",&i);
    printf("the value of i is  %d\n",j);
    }