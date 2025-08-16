#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

  int vetor[10];
  int total = 0;
  int temp = 0;
  int par = 0;
  int impar = 0;
  int escolha = 0;

   int vetorSize = sizeof(vetor)/ sizeof(vetor[0]);

  for (int i = 0; i < vetorSize; i++)
  {
    
   printf("insira um numero: ");
    scanf("%d", &vetor[i]);
    system("cls");
  }

  int maior = vetor[0];
  int menor = vetor[0];

  for (int i = 0; i < vetorSize; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
    }

    if (vetor[i] < menor)
    {
      menor = vetor[i];
    }
    
  }
  
  for (int i = 0; i < vetorSize; i++)
  {
 
    temp = vetor[i];
   total += temp;
    if (temp % 2 == 0)
    {
     par++;
    }else{
      impar++;
    }  
  }

printf("\n os numeros inseridos foram: ");
  for (int i = 0; i < vetorSize; i++)
  {
    printf("%d ", vetor[i]);
  }
Sleep(1000);
  printf("\n os numeros inseridos invertidos: ");
  for (int i = vetorSize - 1; i >= 0 ; i--)
  {
    printf("%d ", vetor[i]);
  }
  Sleep(1000);
printf("\n a soma total dos numeros inseridos e: %d", total);
Sleep(1000);
printf("\n a media e: %d", total / vetorSize);
Sleep(1000);
printf("\n existem %d numeros pares e %d numeros impares",par, impar);
Sleep(1000);
printf("\n o maior numero e: %d e o menor numero e: %d ",maior, menor);
Sleep(1000);

printf("\n qual numero quer saber a posicao?");
scanf("%d",&escolha);
int encontrado = 0;
for (int i = 0; i < vetorSize; i++)
{

  if (vetor[i] == escolha)
  {
   printf("\nO valor procurado esta na posicao %d (indice %d)", i + 1, i);
   encontrado = 1;
  }

}
if (encontrado == 0)
  {
   printf("valor nao encontrado");
  }

  /*
    int numbers [] = {10,20,30,40,50,60,70,80};

    
    
  //  char grade[] = {'A', 'B', 'C', 'D', 'F'};
    //char name[] = "gus";

   int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

    
    for (int i = 0; i < numbersSize; i++)
    {
        printf("%d\n ",numbers[i]);
    }
  */  
    return 0;
}