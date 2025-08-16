#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);// input de string que permite espaços

    // Remove o \n do final da string se estiver presente
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    // Verifica se o nome está vazio
    if (strlen(name) == 0) {
        printf("You didn't type your name.\n");
    } else {
        printf("Hello %s\n", name);
    }

    return 0;
}
