#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "contacts.txt"

#define LINE 256

void add_contact(){

    char name [100], phone[50];
    printf("Nome: "); getchar();
    if(!fgets(name, sizeof(name), stdin)) return;
    name[strcspn(name, "\n")] = 0;
    printf("Telefone: "); if (!fgets(phone,sizeof(phone), stdin)) return;
    phone[strcspn(phone, "\n")]=0;

    FILE *f = fopen(FILE_NAME, "a");
    if(!f){perror("erro ao abrir o arquivo"); return;}
    fprintf(f,"%s|%s\n",name,phone);
    fclose(f);
    printf("Contato Salvo.\n");
}

void list_contacts(){
    char buf[LINE];
    FILE *f = fopen (FILE_NAME, "r");
    if(!f){printf("nenhum contato salvo\n"); return;}
    printf("\n contatos: \n ");
    while(fgets(buf,LINE,f)){
        char *p = strchr(buf, '|');
        if(p){*p = '\0'; printf("Nome: %s, Tel: %s", buf, p+1); if(p[strlen(p)-1]!= '\n')printf("\n");}

    }
    fclose(f);
}

int main(){

    int opt;
    while(1){
        printf("\n [1] Adicionar [2] listar [0] Opcao: ");
        if(scanf("%d", &opt)!= 1) break;
        if(opt == 0) break;
        if(opt == 1) add_contact();
        else if(opt == 2) list_contacts();
    }

    return 0;
}