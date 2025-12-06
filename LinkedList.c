#include <stdio.h>
#include <stdlib.h>

typedef struct Node{// criando o node

    int val;// valor do node
    struct Node *next;//ponteiro que aponta para o proximo node da lista
}Node;

Node* head = NULL; // começando com lista vazia(null) com head, primeiro elemento da lista

void insert_front(int v){// insere um valor no inicio da lista

    Node* n = malloc(sizeof(Node));
    n->val = v; n->next = head; head = n;
}

void remove_val(int v){// remove o primeiro node que tenha o valor procurado

Node **cur = &head;// ponteiro de ponteiro para um node
while (*cur)//percorrer a lista com o ponteiro de ponteiro
{
    //*cur - node atual
    //val - valor do node
    if((*cur)->val == v){
    Node *tmp = *cur;
    *cur = (*cur)->next;
    free(tmp);
    printf("Removido %d\n",v);
    return;
    }else cur = &(*cur)->next;
}
printf("valor %d nao encontrado \n", v);

}

void print_list(){//mostrar a lista

    Node *p = head;// começando pelo primeiro elemento
    printf("lista: ");
    while(p){printf("%d -> ", p->val); p = p->next;}// percorre até o fim
    printf("NULL\n");// fim da lista


}

int main(){

    int opt = 0, v;
    while (1)
    {
        printf("\n1 inserir 2 remover 3 listar 0 sair\nOpcao: ");
        if(scanf("%d", &opt)!=1)break;
        if(opt==0)break;
        if(opt==1){printf("valor"); scanf("%d", &v); insert_front(v);}// lê o valor e insere no inicio da lista
        else if(opt == 2){printf("valor: "); scanf("%d", &v); remove_val(v);}// remove o valor
        else if (opt==3) print_list();// imprime o valor
    }
    


    return 0;
}