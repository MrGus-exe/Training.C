#include <stdio.h>
#include <windows.h>

int main(){

/*
    for (int i = 10; i > 0; i--)
    {
        Sleep(1000);
        printf("%d\n", i);

    }
    
    printf("Happy new year\n");
*/
/*
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j <= 10; j++)
    {
       printf("%d ", j);
    }
    printf("\n");
}

*/
/*
for (int i = 1; i <= 10; i++)
{
    for ( int j = 1; j <= 10; j++)
    {
        printf("%3d ", i * j);
    }
    printf("\n");
}

    
}
    */

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter a number of rows: ");
    scanf("%d", &rows);
    printf("Enter a number of columns: ");
    scanf("%d", &columns);
    printf("Enter a character: ");
    scanf(" %c", &symbol);

    

    for (int i = 0; i < rows; i++)
    {
       
        for (int j = 0; j < columns; j++)
      {
        printf("%3c", symbol);
      }
      printf("\n");
    }
    
    
    return 0;
}