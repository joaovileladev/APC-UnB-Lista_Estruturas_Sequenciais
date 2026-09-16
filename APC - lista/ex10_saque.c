#include <stdio.h>

int main () {
    int valor_total, notas100, notas50, notas20, notas10, notas5, notas2, moedas1;

    scanf("%d", &valor_total);

    notas100 = valor_total / 100;

    notas50 = (valor_total % 100) / 50;

    notas20 = ((valor_total % 100) % 50) / 20;

    notas10 = (((valor_total % 100) % 50) % 20) / 10;

    notas5 = ((((valor_total % 100) % 50) % 20) % 10) / 5;

    notas2 = (((((valor_total % 100) % 50) % 20) % 10) % 5) / 2;

    moedas1 = (((((valor_total % 100) % 50) % 20) % 10) % 5) % 2;

    printf("NOTAS DE 100: %d\n", notas100);
    printf("NOTAS DE 50: %d\n", notas50);
    printf("NOTAS DE 20: %d\n", notas20);
    printf("NOTAS DE 10: %d\n", notas10);
    printf("NOTAS DE 5: %d\n", notas5);
    printf("NOTAS DE 2: %d\n", notas2);
    printf("MOEDAS DE 1: %d\n", moedas1);

    return 0;
}   