#include <stdio.h>

int main() {
    // 10000 x 10000 = 100 milhões de floats (~400 MB)
    // Isso é muito maior que o tamanho padrão da stack (~1-8 MB)
    float matriz[10000][10000];

    // Criando um ponteiro para manipular a matriz
    float *p = &matriz[0][0];
    p[0] = 3.14;

    printf("Primeiro elemento: %.2f\n", p[0]);
    return 0;

    //gcc TesteDeMemoria.c -o teste.exe
}