#include <stdio.h>

int main() {
    double peso, altura, fatorAtividade, ajusteCalorico, taxaMetabolicaBasal, gastoEnergeticoTotal, metaDiaria, proteinaDiaria;
    int idade;

    scanf("%lf", &peso);

    scanf("%lf", &altura);

    scanf("%d", &idade);

    scanf("%lf", &fatorAtividade);

    scanf("%lf", &ajusteCalorico);

    taxaMetabolicaBasal = 88.36 + (13.40 * peso) + (4.80 * altura) - (5.68 * idade);

    gastoEnergeticoTotal = taxaMetabolicaBasal * fatorAtividade;

    metaDiaria = gastoEnergeticoTotal + ajusteCalorico;

    proteinaDiaria = peso * 2;

    printf("Taxa Metabolica Basal: %.2lf kcal\n", taxaMetabolicaBasal);
    printf("Gasto Energetico Total: %.2lf kcal\n", gastoEnergeticoTotal);
    printf("Meta Calorica Diaria: %.2lf kcal\n", metaDiaria);
    printf("Meta de Proteinas: %.2lf g\n", proteinaDiaria);

    return 0;
}