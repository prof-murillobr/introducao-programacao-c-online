#include <stdio.h>

// Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e
// escrever se formam ou não um triângulo. 
// OBS: para formar um triângulo, o valor de cada lado deve ser menor que a soma dos outros 2 lados.

int main() {
    int valorA, valorB, valorC;

    printf("\n\nPor favor, insira um valor:\n\n");
    scanf("%d", &valorA);

    printf("\n\nPor favor, insira outro valor:\n\n");
    scanf("%d", &valorB);

    printf("\n\nPor favor, insira outro valor:\n\n");
    scanf("%d", &valorC);

    if ((valorA < valorB + valorC) &&
        (valorB < valorA + valorC) &&
        (valorC < valorA + valorB)) {
        printf("\nAs medidas correspondem a um triangulo.\n");
    } else {
        printf("\nAs medidas não correspondem a um triangulo.");
    }
    
    return 0;
}