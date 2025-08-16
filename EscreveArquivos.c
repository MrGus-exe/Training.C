#include <stdio.h>

int main(){

    FILE *pFile = fopen("output.txt", "w");

        char text[] = "hello world!";

    if(pFile == NULL){

        printf("error opening file \n ");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf(" file was written successfully ");

    fclose(pFile);

    return 0;
}