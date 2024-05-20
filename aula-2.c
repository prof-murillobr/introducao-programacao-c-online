#include <stdio.h>

int main () {
    int notaTrabalho; 
    int notaAv2;
    int somaDasNotas;
    int somaEMaior;

    printf("Insira sua nota de trabalho: ");
    scanf("%d", &notaTrabalho);
    printf("Nota do trabalho registrada: %d \n", notaTrabalho);

    printf("\nInsira sua nota da AV2: ");
    scanf("%d", &notaAv2);
    printf("Nota da AV2 registrada: %d \n", notaAv2);

    somaDasNotas = notaTrabalho + notaAv2;

    printf("A soma da nota do trabalho (%d) e da AV2 (%d) é: %d \n", notaTrabalho, notaAv2, somaDasNotas);

    somaEMaior = somaDasNotas != 4;

    printf("O resultado da verificação é: %d \n", somaEMaior);

    return 0;
}