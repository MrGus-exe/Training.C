#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;

    printf("Enter the numbers of players: ");
    scanf("%d",&number);

    int *scores = calloc(number,  sizeof(int));

    /*
        calloc é uma função que aloca uma quantidade de elementos e o tamanho em bytes de cada um
        e já inicializa todos com zero
        dá menos bugs
    */

    if(scores == NULL){

        printf("failed at allocate memory");
        return 1;
    }
   
    for (int i = 0; i < number; i++)
    {
        printf("enter score #%d ",i + 1);
        scanf("%d", &scores[i]);
    }


    for (int i = 0; i < number; i++)
    {
        printf("%d ", scores[i]);
    }
    

    free(scores);
    scores = NULL;


    return 0;
}