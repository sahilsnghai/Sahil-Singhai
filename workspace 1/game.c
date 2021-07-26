#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int numb;
    srand(time(0));
    numb= rand()%100 + 1;
    printf("the number is %d: ",numb);

}