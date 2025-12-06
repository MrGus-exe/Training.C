#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int val;
    struct Node *left,*right;

}Node;

Node* newnode(int v){

    Node* n = malloc(sizeof(Node));
    n->val= v; n->left = n->right = NULL; return n;
}

Node* insert(Node* root, int v){
    if(!root)return newnode(v);
    if(v < root->val) root->left = insert(root->left,v);
    else root->right = insert(root->right,v);
    return root;
}

int search( Node* root, int v){
    if(!root) return 0;
    if(root->val == v) return 1;
    if(v < root->val) return search(root->left, v);
    return search(root->right,v);
}

void inorder(Node* r){ if(!r) return; inorder(r->left); printf("%d ", r->val); inorder(r->right);}
void preorder(Node* r){if(!r) return; printf("%d", r->val); preorder(r->left);preorder(r->right);}
void postorder(Node* r){if(!r)return; postorder(r->left); postorder(r->left);postorder(r->right); printf("%d",r->val);}
int main(){

    Node* root = NULL;
    int opt, v;
    while (1)
    {
        printf("\n [1] inserir\n [2] buscar\n [3] percursos\n [0] sair\n Opcao: ");
        if(scanf("%d", &opt)!=1) break;
        if(opt == 0) break;
        if(opt==1){printf("valor: "); scanf("%d",&v); root = insert(root,v);}
        else if (opt == 2){printf("valor: ");scanf("%d",&v); printf(search(root,v)? "Encontrado\n" : "Nao encontrado\n");}
        else if (opt == 3){printf("Inorder: "); inorder(root); printf("\n Preorder: "); preorder(root); printf("\n Postorder");postorder(root); printf("\n");}
    }
    return 0;
}