#include <stdio.h>

void changeValue(int *ptr);

void birthday(int* age);
/*
    ponteiros são variaveis que armazenam o endereço de outra variável. 
    servindo para evitar perda de memória de maneira que você "aponta"
    para o endereço de memória ao invés de compiar o conteúdo do espaço
    onde a memória foi alocada.
    exemplo na vida real seria tipo: ao invés de entregar uma pizza pra cada
    amigo em cada casa diferente, eu digo a eles onde eles podem pegar a pizza
    sem que eu precise ir lá...
    Deu pra entender? 
*/
int main(){


    int age = 25;
    int *pAge = &age;

    printf("endereco da variavel %p\n", &age);
    printf(" endereco do ponteiro %p", pAge);

    birthday(pAge);

    printf("\n you are %d years old ", age);

    int valor = 10;

    printf("\n o valor antes de ser atualizado %d", valor);
    changeValue(&valor);

    printf("\n o valor atualizado %d ", valor);

   return 0; 
}

void birthday(int* age){
// tem que passar por referência, um ponteiro
    (*age)++;

}

void changeValue(int *ptr){

    *ptr = 20;

}