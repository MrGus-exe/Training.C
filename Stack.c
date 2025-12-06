#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct 
{
    int data[MAX];
    int top;
}Stack;

void init(Stack *s){s->top = -1; }
int empty(Stack *s){return s->top == -1;}
int full (Stack *s){return s->top == MAX -1;}

void push(Stack *s, int v){

    if(full(s)){printf("overflow\n"); return;}
    s->data[++s->top] = v;

}

int pop(Stack *s){
    if(empty(s)){printf("underflor\n");return 0;}
    return s->data[s->top--];
}

int main(){

    Stack s; init(&s);
    int opt, v;

    while (1)
    {
        printf("\n [1] push\n [2] pop\n [3] top\n [4] sair\n Escolha: ");
        if(scanf("%d", &opt)!=1)break;
        if(opt==4)break;
        if(opt==1){printf("valor: "); scanf("%d",&v); push(&s,v);}
        else if(opt==2){v = pop(&s); printf("pop: %d\n",v);}
        else if(opt==3){if(!empty(&s)) printf("top: %d\n", s.data[s.top]);}
        else
        printf("pilha vazia\n");
    }
    

    return 0;
}