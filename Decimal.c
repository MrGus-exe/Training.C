#include <stdio.h>
float formulaDecimal();
char tratementoHexaDecimal();
int main(){

    int base = 0;
    int paraDecimal = 0;
    

    printf("Conversor de bases numericas para decimal");

    printf("\n Selecione a base: ");
    printf("\n [2] binario \n [8] octal \n [16] hexadecimal \n");
    scanf("%d", &base);

    switch (base)
    {
    case 2:
         formulaDecimal();
        break;
        case 8:
        formulaDecimal();
        break;
        case 16:
        formulaDecimal();
        break;
    default:
    printf("\n base invalida ");
        break;
    }


    return 0;
}

float formulaDecimal(){
char numero[10] = "";
printf(" digite o numero a ser convertido (limite 10 caracteres) ");
    scanf("%s",&numero);

    
   return (printf("%s", numero));

}

char tratementoHexaDecimal(){



}