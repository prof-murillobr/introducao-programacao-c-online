#include <stdio.h>

int main() {
    int nota;
    printf("\nInsira a nota: (0 a 100) ");
    scanf("%d", &nota);

    if (nota == 100) {
        printf("\n Nota final: A+");
    } else if (nota >= 90 && nota < 100) {
        printf("\n Nota final: A");
    } else if (nota < 90 && nota >= 80) {
        printf("\n Nota final: B");
    } else if (nota < 80 && nota >= 70) {
        printf("\n Nota final: C");
    } else if (nota < 70 && nota >= 60) {
        printf("\n Nota final: D");
    } else if (nota < 60) {
        printf("\n Nota final: F");
    }

    return 0;
}