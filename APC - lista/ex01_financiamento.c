#include <stdio.h>
#include <math.h>

int main() {
    double valorFinanciado, taxaDeJuros, prestacaoBase, parcelaComSeguro, jurosTotais, custoTotal;
    int numeroDeParcelas;

    scanf("%lf", &valorFinanciado);

    scanf("%lf", &taxaDeJuros);

    scanf("%d", &numeroDeParcelas);

    taxaDeJuros /= 100;

    prestacaoBase = valorFinanciado * ( taxaDeJuros * pow(1 + taxaDeJuros, numeroDeParcelas) ) / ( pow(1 + taxaDeJuros, numeroDeParcelas) - 1);

    parcelaComSeguro = prestacaoBase + 75.00;

    jurosTotais = prestacaoBase * numeroDeParcelas - valorFinanciado;

    custoTotal = (parcelaComSeguro * numeroDeParcelas) + (valorFinanciado * 0.015);

    printf("Prestacao Base: R$ %.2lf\n", prestacaoBase);
    printf("Parcela Mensal com Seguro: R$ %.2lf\n", parcelaComSeguro);
    printf("Total de Juros Pagos: R$ %.2lf\n", jurosTotais);
    printf("Custo Total do Financiamento: R$ %.2lf\n", custoTotal);

    return 0;
}