#include <stdio.h>

int main () {
    int variavelA;
    int variavelB;
    int resultado;

    printf("Por favor, digite um número: ");
    scanf("%d", &variavelA);

    printf("Agora, digite outro número: ");
    scanf("%d", &variavelB);

    resultado = variavelA * variavelB;

    printf("\tO resultado da multiplicação de %d por %d é: %d \n", variavelA, variavelB, resultado);

    return 0;
}