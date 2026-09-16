/*Uma residência deseja calcular o consumo total de energia e a fatura mensal referente a três aparelhos elétricos: ar-condicionado, geladeira e computador.

O consumo mensal em quilowatts-hora (kWh) de cada aparelho é obtido pela fórmula:
kWh = (potencia_em_watts * horas_de_uso_no_mes) / 1000.0

Entrada
A entrada consiste de:

Seis valores reais (double), representando em pares a potência (W) e as horas de uso mensal do ar-condicionado, da geladeira e do computador.
Um valor real (double) representando o valor da tarifa por kWh em reais (R$).
Saída
Imprima exatamente duas linhas contendo o consumo total em kWh e o valor da fatura em reais, ambos com 2 casas decimais:

Consumo total: X.XX kWh
Valor da conta: R$ Y.YY
Por exemplo:

Input	Resultado
1200.0 150.0
300.0 720.0
400.0 120.0
0.75
Consumo total: 444.00 kWh
Valor da conta: R$ 333.00*/

#include <stdio.h>

double consumo(double a, double b) {
    return (a * b) / 1000.0;
}

int main() {
    double potencia_ac, horas_ac, potencia_geladeira, horas_geladeira, potencia_pc, horas_pc, tarifa;
    double consumo_total, valor_total;
    double consumo_ac, consumo_geladeira, consumo_pc;

    scanf("%lf", &potencia_ac);
    scanf("%lf", &horas_ac);
    scanf("%lf", &potencia_geladeira);
    scanf("%lf", &horas_geladeira);
    scanf("%lf", &potencia_pc);
    scanf("%lf", &horas_pc);
    scanf("%lf", &tarifa);

    consumo_ac = consumo(potencia_ac, horas_ac);
    consumo_geladeira = consumo(potencia_geladeira, horas_geladeira);
    consumo_pc = consumo(potencia_pc, horas_pc);
    consumo_total = consumo_ac + consumo_geladeira + consumo_pc;

    valor_total = consumo_total * tarifa;

    printf("Consumo total: %.2lf kWh\n", consumo_total);
    printf("Valor da conta: R$ %.2lf\n", valor_total);

    return 0;
}