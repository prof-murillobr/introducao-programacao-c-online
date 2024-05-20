#include <stdio.h>

// Ler 3 valores (considere que não serão informados valores iguais) 
// e escrever o maior deles.

int main() {
    int valorA, valorB, valorC;
    int maior;
    
    printf("\n\nPor favor, insira um valor:\n\n");
    scanf("%d", &valorA);

    printf("\n\nPor favor, insira outro valor:\n\n");
    scanf("%d", &valorB);

    printf("\n\nPor favor, insira outro valor:\n\n");
    scanf("%d", &valorC);

    maior = valorA;

    if (valorB > maior) {
        maior = valorB;
    }

    if (valorC > maior) {
        maior = valorC;
    }

    printf("\n\nO maior valor é: %d\n\n", maior);

    // if (valorA > valorB && valorA > valorC) {
    //     printf("\n\nO maior valor é: %d\n\n", valorA);
    // } else if (valorB > valorA && valorB > valorC) {
    //     printf("\n\nO maior valor é: %d\n\n", valorB);
    // } else {
    //     printf("\n\nO maior valor é: %d\n\n", valorC);
    // }

    return 0;
}