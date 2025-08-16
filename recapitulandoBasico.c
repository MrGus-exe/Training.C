#include <stdio.h>
 #include <stdbool.h>
 #include <string.h>
//revisando c



int main() {
 
    int age;
    float gpa;
    char grade;
    char name[10]; 

    printf("enter your age: ");
    scanf("%d", &age);

     printf("enter your gpa: ");
    scanf("%f", &gpa);

     printf("enter your grade: ");
    scanf(" %c", &grade);

    getchar();
     printf("enter your full name: ");
     fgets(name,sizeof(name), stdin);
    name[strlen(name) - 1 ] = '\0';

     printf("%s\n",name);
    printf("%d\n",age);
    printf("%f\n",gpa);
    printf("%c\n",grade);
        
    
/*
#include <string.h> <-- biblioteca para usar esses comandos aí de baixo
 fgets(name,sizeof(name), stdin); <--- inserir uma string usando a quantidade de espaço alocado no array e poder escrever dando espaço
    name[strlen(name) - 1 ] = '\0'; <--- estrutura para não pular uma linha após a inserção de uma string

*/

    return 0;
}