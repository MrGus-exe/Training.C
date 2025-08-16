#include <stdio.h>

int main(){

    FILE *pFile = fopen("C:\\Users\\yukin\\Downloads\\sql.txt","r");

    char buffer[1024] = {0};

    if (pFile == NULL)
    {
        printf("could not open file\n");
        return 1;
    }
    
    while (fgets(buffer,sizeof(buffer), pFile) != NULL)
    {
    printf("%s", buffer);        
    }
    

    fclose(pFile);


    return 0;
}