#include <stdio.h>

int main() {
    char operacao; // *, +, -, /
    int valor1, valor2;
    int resultado = NULL;

    printf("\nInsira a operação: (+, -, *, /) \n");
    scanf("%c", &operacao);

    printf("\nAgora insira o primeiro valor: ");
    scanf("%d", &valor1);

    printf("\nInsira o segundo valor: ");
    scanf("%d", &valor2);

    switch (operacao) {
        case '*':
            resultado = valor1 * valor2;
            break;
        case '/':
            resultado = valor1 / valor2;
            break;
        case '-':
            resultado = valor1 - valor2;
            break;
        case '+':
            resultado = valor1 + valor2;
            break;
        default:
            printf("\nOperação inválida.\n");
            break;
    }

    if (resultado)
        printf("Resultado: %d\n", resultado);

    return 0;
}