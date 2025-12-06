#include <stdio.h> 
#include<stdlib.h>
#include <time.h>

int main(){

        srand((unsigned)time(NULL));
        int secret = rand() % 100 + 1;
        int guess, tries = 0;
        printf("Adivinhe o numero entre 1 e 100\n");

        do
        {
            printf("seu palpite: ");
            if (scanf("%d", &guess)!=1){printf("entrada invalida\n"); return 0;}
            
              tries++;
              if(guess < secret) printf("maior\n");
              else if (guess > secret){printf("menor\n");}
              else{ printf("acertou com %d tentativas\n", tries);}
            
        } while (guess !=secret);
        
    
    

    return 0;
}