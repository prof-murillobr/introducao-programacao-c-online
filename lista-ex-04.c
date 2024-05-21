#include <stdio.h>

// Ler 3 valores (considere que não serão informados valores iguais) 
// e escrever a soma dos 2 maiores.

int main() {
    int valorA, valorB, valorC;

    int primeiroMaior, segundoMaior;
    int somaDosMaiores;

    printf("\n\nPor favor, insira um valor:\n\n");
    scanf("%d", &valorA);

    printf("\n\nPor favor, insira outro valor:\n\n");
    scanf("%d", &valorB);

    printf("\n\nPor favor, insira outro valor:\n\n");
    scanf("%d", &valorC);

    if (valorA > valorB) {
        primeiroMaior = valorA;

        if (valorB > valorC) {
            segundoMaior = valorB;
        } else {
            segundoMaior = valorC;
        }
    } else {
        primeiroMaior = valorB;

        if (valorA > valorC) {
            segundoMaior = valorA;
        } else {
            segundoMaior = valorC;
        }
    }

    somaDosMaiores = primeiroMaior + segundoMaior;

    printf("\nA soma dos dois maiores é: %d\n", somaDosMaiores);

    return 0;
}