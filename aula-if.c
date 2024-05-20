#include <stdio.h>

int main() {
    int idade;

    printf("Por favor, digite sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 65) {
        printf("\nVocê está apto a trabalhar!\n");
    } else {
        printf("\nVocê não está apto a trabalhar.\n");

        if (idade < 18) {
            printf("\nVocê é novo demais.\n");
        } else {
            printf("\nVocê é velho demais.\n");
        }
    }

    return 0;
}