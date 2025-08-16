#include <stdio.h>
#include <stdlib.h>
#include  <time.h>

int main(){


    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() %(max - min + 1) + min);

    printf("Number guessing game");


    do
    {
        
         printf("Guess a number between %d / %d: ", min, max);
         scanf("%d", &guess);
         tries++;

            if (guess < answer)

            {
                printf(" too low \n");
            } else if (guess > answer)
            {
                printf(" too high \n");
            } else{
               
                printf(" You are right! \n");

            }
            
            

    } while (guess != answer);
    

    printf("The answer is: %d", answer);
     printf("\nit took you: %d  tries", tries);

    return 0;
}