#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define Bombs 5

char visible[N][N];
int bombs[N][N];

void init(){
    for(int i=0; i < N; i++)for(int j=0; j< N; j++){visible[i][j] = '#'; bombs[i][j] = 0;}
    srand(time(NULL));
    int placed = 0;
    while (placed < Bombs)
    {
        int r = rand()%N, c = rand()%N;
        if(!bombs[r][c]){bombs[r][c] = 1; placed++;}
    }   
}

int neighbors(int r, int c){
    int cnt=0;
    for(int i = r-1; i<=r+1; i++) for(int j = c-1; j<=c+1; j++)
    if(i >= 0 && i < N && j>= 0 && j< N) cnt += bombs[i][j];
    return cnt;

}

void print_board(){
    printf("\n ");
     for(int j = 0; j< N; j++) printf("%d ", j);
     printf("\n");
     for(int i = 0; i <N; i++){
        printf("%d ", i);

        for (int j = 0; j < N; j++)printf("%c ", visible[i][j]);
        printf("\n");
            
     }

}

int main(){

    init();
    int opened = 0, total = N *N - Bombs;
    while (1)
    {
        print_board();
        int r,c;
        printf("abra a linha coluna: ");
        if(scanf("%d %d", &r, &c)!=2)break;
        if(r<0|| r >= N || c<0 || c> N){printf("posicao invalida\n");continue;}
        if(bombs[r][c]){ printf( "BOOM! perdeu.\n"); break;}
        if(visible[r][c] != '#'){ printf("já aberto\n"); continue;}
        int neigh = neighbors(r,c);
        visible[r][c] = (neigh == 0) ? ' ': ('0' + neigh);
        opened++;
        if(opened == total){print_board(); printf("voce venceu!\n"); break;}
    }
    

    return 0;
}