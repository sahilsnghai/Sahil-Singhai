#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numb, guess, nguess = 1;
    srand(time(0));
    numb = rand() % 10 + 1;
    //printf("the number is %d : \n", numb);
    do
    {
        printf("guess the number between 1 to 10: \n");
        scanf("%d", &guess);
        if (guess > numb)
            printf("lower number please: \n");
        else if (guess < numb)
        {
            printf("higher number please: \n");
        }
        else
        {
            printf("you guessed it in %d attempts\n", nguess);
        }
        nguess++;

    } while (guess != numb);

    return 0;
}