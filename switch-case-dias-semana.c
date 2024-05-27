#include <stdio.h>

int main() {
    int valor;
    printf("\nInsira um valor entre 1 e 7\n");
    scanf("%d", &valor);

    switch (valor) {
        case 1:
            printf("\nDomingo!\n");
            break;
        case 2:
            printf("\nSegunda-feira\n");
            break;
        case 3:
            printf("\nTerça-feira\n");
            break;
        case 4:
            printf("\nQuarta-feira\n");
            break;
        case 5:
            printf("\nQuinta-feira\n");
            break;
        case 6:
            printf("\nSexta-feira\n");
            break;
        case 7:
            printf("\nSábado!\n");
            break;
        default:
            printf("\nO valor inserido está incorreto.\n");
            break;
    }

    return 0;
}