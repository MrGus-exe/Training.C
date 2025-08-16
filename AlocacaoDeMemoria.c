#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("enter a number of grades");
    scanf("%d",&number);

    char *grades = malloc(number * sizeof(char));// aqui o ponteiro tá reservando espaço na memória
    // do tamanho do número que eu inserir vezes o tanto de bits que consome o tipo "char"(1)

    if(grades == NULL){
        printf("memory allocation failed");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("enter grade #%d", i + 1);
        scanf(" %c", &grades[i]);
    }
    
    for (int i = 0; i < number; i++)
    {
        printf("%c ", grades[i]);
    }
    

    free(grades); //returning the rented space on memory
    grades = NULL; // avoids dangling pointers

    /*
    malloc é uma função que meio q faz um array, mas tu tem q liberar a memória do ponteiro dps
    */

    return 0;
}