#include <stdio.h>
#include <stdbool.h>

int main(){
/*
int num1 = 1;
int num2 = 1;

while (num1 <= 0)
{
    printf("(1)type a number greater than 0\n");
    scanf("%d", &num1);
}

do
{
    printf("(2)type a number greater than 0\n");
    scanf("%d", &num2);
} while (num2 <= 0);
*/
/*
char name[50] = "";

printf("enter your name");
fgets(name,sizeof(name), stdin);
name[strlen(name) - 1 ] = '\0';

while (strlen(name) == 0)
{
    printf(" name cannot be empty. Enter your name again \n");
    fgets(name,sizeof(name), stdin);
    name[strlen(name) - 1 ] = '\0';
}

printf("hello %s", name);
*/

bool isRunning = true;
char response = '\0';

while (isRunning)
{
    printf(" You are playing a game!\n");
    printf(" Would you like to continue? (Y = yes , N = no)\n");
    scanf(" %c", &response);

    if (response  != 'Y' && response  != 'y')
    {
        isRunning = false;
    }
    
}
printf("you exit the game");


}