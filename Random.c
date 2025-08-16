#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    srand(time(NULL));

    int min = 50;
    int max = 100;

    int randomNum = (rand() % (max - min )) + min;

    for (int i = 1; i < 10; i++)
    {
        int randomNum = (rand() % (max - min + 1 )) + min;
        printf(" %d", randomNum);
    }
    
    printf("%d",randomNum);

    return 0;
}