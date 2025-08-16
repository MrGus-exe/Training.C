#include <stdio.h>
#include <stdbool.h>

void hello(char name[],int age);
bool ageCheck(int age);
// Function prototipe
//declara que a função existe logo no começo pra poder escrever ela dps no código... interessante

int main(){

hello("Spongebob", 30);

    if(ageCheck(15)){

        printf("you are old enough to work on krusty krab");
    }else{
        printf("you are not old enough to work on krusty krab");
    }

    return 0;
}

void hello(char name[], int age){

printf("hello %s \n", name);
printf("you are %d old \n", age);


}

bool ageCheck(int age){

    return age >= 16;// essa é a condição para retornar o valor boolean da função
}