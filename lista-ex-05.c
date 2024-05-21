#include <stdio.h>

// Ler 3 valores (considere que não serão informados valores iguais) 
// e escrevê-los em ordem crescente.

int main() {
    int valorA, valorB, valorC;

    int menor, medio, maior;

    printf("\n\nPor favor, insira um valor:\n\n");
    scanf("%d", &valorA);

    printf("\n\nPor favor, insira outro valor:\n\n");
    scanf("%d", &valorB);

    printf("\n\nPor favor, insira outro valor:\n\n");
    scanf("%d", &valorC);


    if (valorA < valorB && valorA < valorC) {
        menor = valorA;
        if (valorB < valorC) {
            medio = valorB;
            maior = valorC;
        } else {
            medio = valorC;
            maior = valorB;
        }
    } else if (valorB < valorA && valorB < valorC) {
        printf("\nMenor: %d", valorB);
        if (valorA < valorC) {
            printf("\nMédio: %d", valorA);
            printf("\nMaior: %d", valorC);
        } else {
            printf("\nMédio: %d", valorC);
            printf("\nMaior: %d", valorA);
        }
    } else {
        printf("\nMenor: %d", valorC);
        if (valorA < valorB) {
            printf("\nMédio: %d", valorA);
            printf("\nMaior: %d", valorB);
        } else {
            printf("\nMédio: %d", valorB);
            printf("\nMaior: %d", valorA);
        }
    }

    printf("\nMenor: %d", menor);
    printf("\nMédio: %d", medio);
    printf("\nMaior: %d", maior);


    return 0;
}