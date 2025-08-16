#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>

int getComputerChoice();

void gameInterface(int userChoice, int computerChoice);
void checkWinner(int userChoice, int ComputerChoice);

int main()
{
    
    srand(time(NULL));

    printf(" Rock Paper Scissors Game!\n ");

    

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();


    printf("    Rock...\n ");
    Sleep(1000);
    printf(" Paper...\n ");
    Sleep(1000);
    printf(" Scissors!\n ");
    Sleep(1000);

    switch (userChoice)
    {
    case 1:
        printf("\n (player) - Rock");
        break;
    case 2:
        printf("\n (player) - Paper");
        break;
    case 3:
        printf("\n (player) - Scissors");
        break;
    default:
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("\n (Computer) - Rock");
        break;
    case 2:
        printf("\n (Computer) - Paper");
        break;
    case 3:
        printf("\n (Computer) - Scissors");
        break;
    default:
        break;
    }

    checkWinner(userChoice, computerChoice);
    

    return 0;
}

int getComputerChoice()
{

    return (rand() % 3) + 1;
}

int getUserChoice()
{

    // return (rand() % 3) + 1;

    int choice = 0;

    do
    {
        printf("Choose an Option: \n");
        printf("[1]. Rock \n");
        printf("[2]. Paper \n");
        printf("[3]. Scissors \n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);

    } while (choice < 1 || choice > 3);

    return choice;

    
}

void checkWinner(int userChoice, int ComputerChoice)
{

    if (userChoice == ComputerChoice)
    {
        printf("\n It's a Tie!");
    }
    else if (userChoice == 1 && ComputerChoice == 2)
    {
        printf("\nYou loose!");
    }
    else if (userChoice == 2 && ComputerChoice == 1)
    {
        printf("\nYou win!");
    }
    else if (userChoice == 1 && ComputerChoice == 3)
    {
        printf("\nYou win!");
    }else if (userChoice == 3 && ComputerChoice == 1)
    {
        printf("\nYou Loose!");
    }else if (userChoice == 2 && ComputerChoice == 3)
    {
        printf("\nYou loose");
    }else if (userChoice == 3 && ComputerChoice == 2)
    {
        printf("\nYou win!");
    }
}

