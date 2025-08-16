#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

int main(){


    char questions[][100] = {  "What is the largest planet in the solar system?",
                               "What is the hottest Planet?",
                               "What planet has the most moons?",
                               "Is the Earth flat?"};

    char options[][100] = {"A) Jupiter\n B) Saturn\n C) Uranus\n D) Neptune",
                             "A) Mercury\n B) Venus\n C) Uranus\n D) Neptune",
                             "A) Earth\n B) Mars\n C) Jupiter\n D) Saturn",
                             "A) Yes\n B) No\n C) Maybe\n D) Sometimes"}; 



    char answerkey[] = {'A','B','D','B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for (int i = 0; i < questionCount; i++)
    {
        
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);


       
            if(guess == answerkey[i])
                {
                    printf("CORRECT!");
                    score++;
                    Sleep(2000);
                    system("cls");
                    
                }else{

                    printf("WRONG!");
                    Sleep(2000);
                    system("cls");
                }
        

    }
    

        printf("\n Your score is %d out of %d points\n", score, questionCount);
   
    


    return 0;
}