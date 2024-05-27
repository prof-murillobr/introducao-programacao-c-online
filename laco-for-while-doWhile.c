#include <stdio.h>

void repetirWhile() {
    int valorInicial = 1;
    int valorMaximo = 10;

    while (valorInicial <= valorMaximo) {
        printf("Valor: %d\n", valorInicial);
        valorInicial++;
    }
}

void repetirDoWhile() {
    int valorInicial = 0;
    int valorMaximo = 10;

    do {
        valorInicial++;
        printf("Valor: %d\n", valorInicial);
    } while (valorInicial < valorMaximo);
}

void repetirFor() {
    for(int valorInicial = 1; valorInicial <= 10; valorInicial++) {
        printf("Valor: %d\n", valorInicial);
    }
}

int main() {

    // repetirWhile();

    // repetirDoWhile();

    // repetirFor();

    return 0;
}

