#include <stdio.h>

int main () {
    double C, F, K, R;

    scanf("%lf", &C);

    F = (C * 9 / 5) + 32;

    K = C + 273.15;

    R = F + 459.67;

    printf("Temperatura em Fahrenheit: TF = %.2lf F\n", F);
    printf("Temperatura em Kelvin: TK = %.2lf K\n", K);
    printf("Temperatura em Rankine: TR = %.2lf R\n", R);
}