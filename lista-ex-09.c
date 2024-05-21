#include <stdio.h>

// Faça um algoritmo para ler o valor do saque realizado pelo cliente de um banco
// e escrever quantas notas de cada valor serão necessárias para atender ao saque
// com a menor quantidade de notas possível. Serão utilizadas notas de 100, 50,
// 20, 10, 5, 2 e 1 reais.

int main() {
    float valorSaque; //550
    float valorPendente;

    int quantidade_notas_100;
    int quantidade_notas_50;
    int quantidade_notas_20;
    int quantidade_notas_10;
    int quantidade_notas_5;
    int quantidade_notas_2;
    int quantidade_notas_1;

    printf("\n\nPor favor, insira o valor:\n\n");
    scanf("%f", &valorSaque);

    quantidade_notas_100 = valorSaque / 100;
    valorPendente = valorSaque - (quantidade_notas_100 * 100);

    quantidade_notas_50 = valorPendente / 50;
    valorPendente = valorPendente - (quantidade_notas_50 * 50);

    quantidade_notas_20 = valorPendente / 20;
    valorPendente = valorPendente - (quantidade_notas_20 * 20);

    quantidade_notas_10 = valorPendente / 10;
    valorPendente = valorPendente - (quantidade_notas_10 * 10);

    quantidade_notas_5 = valorPendente / 5;
    valorPendente = valorPendente - (quantidade_notas_5 * 5);

    quantidade_notas_2 = valorPendente / 2;
    valorPendente = valorPendente - (quantidade_notas_2 * 2);

    quantidade_notas_1 = valorPendente / 1;
    valorPendente = valorPendente - (quantidade_notas_1 * 1);

    printf("\n\nQuantidade de notas de 100: %d\n", quantidade_notas_100);
    printf("\n\nQuantidade de notas de 50: %d\n", quantidade_notas_50);
    printf("\n\nQuantidade de notas de 20: %d\n", quantidade_notas_20);
    printf("\n\nQuantidade de notas de 10: %d\n", quantidade_notas_10);
    printf("\n\nQuantidade de notas de 5: %d\n", quantidade_notas_5);
    printf("\n\nQuantidade de notas de 2: %d\n", quantidade_notas_2);
    printf("\n\nQuantidade de notas de 1: %d\n", quantidade_notas_1);


    return 0;
}