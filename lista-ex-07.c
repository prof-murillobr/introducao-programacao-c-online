#include <stdio.h>

// Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e
// 

int main() {
    float valorA, valorB, valorC;
    float media;

    printf("\n\nPor favor, insira um valor:\n\n");
    scanf("%f", &valorA);

    printf("\n\nPor favor, insira outro valor:\n\n");
    scanf("%f", &valorB);

    printf("\n\nPor favor, insira outro valor:\n\n");
    scanf("%f", &valorC);

    media = (valorA + valorB + valorC)/3;

    printf("A média das notas é: %.2f\n", media);

    if (media >= 6) {
        printf("\nAPROVADO!\n");
    } else {
        printf("\nREPROVADO!\n");
    }

    return 0;
}