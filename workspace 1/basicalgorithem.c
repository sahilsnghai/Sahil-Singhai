#include <stdio.h>
#include <stdlib.h>

int main(void)
{    
    printf("%d",test(11, 21));
    printf("\n%d",test(11, 20));
    printf("\n%d",test(10, 10));
    }       
    int test(int x, int y)
         {
            return x / 10 == y / 10 || x / 10 == y % 10 || x % 10 == y / 10 || x % 10 == y % 10;
         }

  