#include <stdio.h>

int main() {
    int valor;

    printf("\n\n\nPor favor, digite um valor para ser verificado:\n");
    scanf("%d", &valor);

    // if (valor > 0) {
    //     printf("\n\nValor POSITIVO.\n\n");
    // } else if (valor < 0) {
    //     printf("\n\nValor NEGATIVO.\n\n");
    // } else {
    //     printf("\n\nValor ZERO.\n\n");
    // }

    if (valor == 0) {
        printf("\n\nValor ZERO.\n\n");
    } else if (valor > 0) {
        printf("\n\nValor POSITIVO.\n\n");
    } else {
        printf("\n\nValor NEGATIVO.\n\n");
    }

    return 0;
}