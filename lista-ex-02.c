#include <stdio.h>

int main() {
    int numero;
    int restoDivisao;

    printf("\n\nPor favor, insira o número a ser verificado:\n\n");
    scanf("%d", &numero);

    restoDivisao = numero % 2;

    if (restoDivisao == 0) {
        printf("\n\nPAR\n\n");
    } else {
        printf("\n\nIMPAR\n\n");
    }

    return 0;
}