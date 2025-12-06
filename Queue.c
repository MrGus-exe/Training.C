#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
} Node;
Node *frontN = NULL, *rearN = NULL;

void enqueue(int v)
{

    Node *n = malloc(sizeof(Node));
    n->val = v;
    n->next = NULL;
    if (!rearN)
        frontN = rearN = n;
    else
    {
        rearN->next = n;
        rearN = n;
    }
}

int dequeue()
{

    if (!frontN)
    {
        printf("fila vazia\n");
        return 0;
    }
    Node *tmp = frontN;
    int v = tmp->val;
    frontN = frontN->next;
    if (!frontN)
        rearN = NULL;
    free(tmp);
    return v;
}

void print_queue()
{
    Node *p = frontN;
    printf("Fila: ");
    while (p)
    {
        printf("%d -> ", p->val);
        p = p->next;
    }
    printf("null\n");
}

int main()
{

    int opt, v;
    while (1)
    {
        printf("\n [1] enq \n [2] deq \n [3] ver \n [0] sair \n opcao:  ");
        if (scanf("%d", &opt) != 1)
            break;
        if (opt == 0)
            break;
        if (opt == 1)
        {
            printf("valor: ");
            scanf("%d", &v);
            enqueue(v);
        }
        else if (opt == 2)
        {
            v = dequeue();
            if (frontN || rearN)
                printf("dequeued: ");
        }
        else if (opt == 3)
            print_queue();
    }

    return 0;
}