#include <stdio.h>

int main(){
    
    
    char numpad[][3] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'},
                        {'#','0','*'}};


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        printf("%c ", numpad[i][j]);
        
        }
        printf("\n");
    }
    
    
    
    /*
    int numbers[][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

                        apenas uma representação visual que faz sentido
                        numbers[] = são as linhas, num tem limite
                               [3] = são as colunas

    for (int i = 0; i < 3; i++)//rows
    {
        for (int j = 0; j < 3; j++)//columns
        {
            printf("%d ", numbers[i][j]);

        }
        printf("\n");
    }
    */
    return 0;
}