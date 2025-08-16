#include <stdio.h>
#include <stdlib.h>

int main(){

//Corrupting memory

float matriz[2][2];
float *p = &matriz[0][0];

for (long long i = 0; i < 1000000000; i++)
{
    p[i] = 1.0;
}



    /*
//heap overflow
float *matriz = malloc(sizeof(float) * 1000000000);

if(!matriz){
printf("falha na alocação\n");
return 1;

}

matriz[0] = 3.14;
printf("%.2f\n", matriz[0]);
free(matriz);
//*/

/*
Stack Overflow
float matriz[10000][10000];

matriz [0][0] = 1.5;

printf("%.2f\n", matriz[0][0]);
*/

    return 0;
}