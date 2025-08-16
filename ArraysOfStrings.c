#include <stdio.h>
#include <string.h>
int main(){


    

/*
Uma representação visual desse vetor de string(array of string) que faz sentido é tipo isso aqui: 

char fruit[][10] = {"apple", 
                    "banana", 
                    "coconunt", 
                    "pineapple", 
                    "lemon"};

                    fruit[] é o número de linhas que serão alocados os caracteres
                           [10] é o tamanho da string. tipo "nome[50]". e também é o número de colunas
                           explicando de maneira simples: tem que definir quantas linhas primeiro dps o tamanho da string.
                           agora faz mais sentido
                    
*/


/*
Primeiro exemplo:

 char fruit[][10] = {"apple", "banana", "coconunt", "pineapple", "lemon"};
    int size = sizeof(fruit) / sizeof(fruit[0]);

    fruit[0][4] = 'j';
    fruit[0][0] = 'k';

    fruit[3][5] = 'w';

    for (int i = 0; i < size; i++)
    {
        printf("%s\n", fruit[i]);
    }
    */

 // Exercício:

 char names[4][25]  = {0};

   int rows = sizeof(names) / sizeof(names[0]);

     for (int i = 0; i < rows; i++)
     {
         printf("enter a name: \n");
         fgets(names[i], sizeof(names[i]), stdin);
            names[i][strlen(names[i]) - 1] = '\0';
     }
     
     for (int i = 0; i < rows; i++)
     {
       printf("%s\n", names[i]);
     }
     

    
    



    return 0;
}