#include <stdio.h>

typedef int number;
typedef char String[50];

typedef enum {
    SUNDAY = 1, MONDAY = 2 , TUESDAY = 3, WEDNESDAY = 4, THURSDAY = 5 , FRIDAY = 6, SATURDAY = 7


}Day;

typedef enum {
        SUCCESS, FAILURE, PENDING
}Status;

/*
    typedef é uma palavra reservada que basicamente faz com que você dê um "apelido" para uma variável 
    especificando o seu tipo. serve pra simplificar o entendimento do código 
*/

/*
    enum é uma maneira de você definir préviamente o valor de alguma variável de maneira constate que não se altera 
    durante o código, dá pra colocar nomes em valores numéricos... Uma viadagem qualquer que inventaram lá
*/

void connectStatus(Status status);

int main(){


Status status = PENDING;

connectStatus(status);



/*
 Day today = MONDAY;

 if (today == SATURDAY || today == SUNDAY)
 {
   printf(" It's day %d. of the week, we are in the weekend!",today);
 }else{
    printf(" we are not in the weekend");
 }
 

printf("\n%d", today);
*/


/*
number x = 10;

printf("%d", x);

String name = "MrGus";

printf("\n%s", name);
*/

    return 0;
}

void connectStatus(Status status){

    switch (status)
    {
        case SUCCESS:
        printf("connetion was successfull\n");
        break;
    case FAILURE:
    printf("could not connect\n");
        break;
        case PENDING:
    printf("connecting...\n");
        break;
    
    default:
        break;
    }

}