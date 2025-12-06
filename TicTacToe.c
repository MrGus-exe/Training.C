#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char board [3][3];

void init_board(){

for(int i = 0; i < 3; i++)for(int j = 0; j < 3; j++)board[i][j] = ' ';

}

void print_board(){

    printf("\n");
    for(int i = 0; i < 3; i++){
         printf("  %c | %c | %c \n ", board[i][0], board[i][1], board[i][2]);
          if(i<2) printf("---+---+---\n");
       
    }
    printf("\n");
}

int check_winner(char p){

    for(int i = 0; i < 3; i++) if(board[i][0]==p && board[i][1]==p && board[i][2]==p) return 1;
    for(int j=0; j < 3; j++) if(board[0][j] ==p && board[1][j] ==p && board[2][j] ==p) return 1;
    if(board[0][0] == p && board[1][1] == p && board[2][2] == p) return 1;
    if(board[0][2] == p && board[1][1] == p && board[2][0] == p) return 1;
    return 0;
}

 int is_full(){

    for(int i = 0; i <3; i++) for(int j= 0; j<3; j++) if(board[i][j] == ' ') return 0;
    return 1;

 }

int main(){

    init_board();
    char player = 'X';    
    while (1)
    {
       
        print_board();
    
        int r,c;
        printf("jogador %c, digite linha e coluna (0-2)", player);
        if(scanf("%d %d", &r,&c)!=2){printf("entrada invalida\n"); return 0;}
        if(r<0||r>2||c<0||c>2|| board[r][c]!= ' '){
            printf("Movimento invalido. tente de novo\n");
            continue;
        }
        board[r][c] = player;
        if (check_winner(player))
        {
            print_board();
            printf("jogador %c venceu \n ",player );
            break;
        }
        if(is_full()){
            print_board();
            printf("empate\n");
            break;
        }
        system('cls');
        player = (player == 'X') ? 'O' : 'X';
        
    }
   

    

    return 0;
}