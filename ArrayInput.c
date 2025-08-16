#include <stdio.h>
#include <stdlib.h>

int main(){

int scores[5] = {0}; 

int scoresSize = sizeof(scores)/ sizeof(scores[0]);



for (int i = 0; i < scoresSize; i++)
{
    printf("Enter a score: ");
    scanf("%d",&scores[i]);
}


for (int i = 0; i < scoresSize; i++)
{

    printf("%d ", scores[i]);

}


}