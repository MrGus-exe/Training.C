#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char secret[] = "PROGRAMACAO";
    int len = strlen(secret);
    char guessed[100];
    for(int i=0; i<len;i++) guessed[i] = (secret[i]== ' ')? ' ': '_';
    guessed[len] = '\0';
    int attempts = 6;
    int won = 0;
    
    while(attempts > 0 && !won){
        printf("\n palavra: %s\n", guessed);
        printf("tentativas restantes: %d\n", attempts);
        printf("digite uma letra: ");
        char c;
        if(scanf(" %c", &c) != 1) break;
        c = toupper(c);
        int found = 0;
        for(int i=0; i < len ; i++){
            if(secret[i] == c && guessed[i]== '_'){
            guessed[i]=c; found = 1;
        }
    }
    if(!found) attempts--;
    if(strcmp(guessed,secret)== 0) won = 1;
}

if(won) printf("\n voce venceu! palavra: %s\n", secret);
else printf("\n voce perdeu. palavra era: %s\n", secret);
   

    return 0;
}